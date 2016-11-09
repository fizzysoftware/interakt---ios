//
//  ApiCall.h
//  InteraktSDK
//
//  Created by Interakt on 24/10/16.
//  Copyright © 2016 Interakt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InteractApiCall : NSObject

@property(nonatomic,strong)NSDictionary *metaDataDictionary;

+ (InteractApiCall *)sharedManager;

-(void)faqGetRequest;

-(void)faqCategoryToQuestionGetRequest:(NSString *)categoryId;

-(void)faqQuestionToAnswerGetRequest:(NSString *)questionId and:(NSString *)categoryID;

-(void)searchQuestion:(NSString *)keywordString;

-(void)getHelpdeskMetaData;

-(void)submitHelpDeskQuery:(NSDictionary *)parameterDictionary;

@end

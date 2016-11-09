//
//  ShowQuestionAnswerViewController.h
//  InteraktSDK
//
//  Created by Quickli on 20/10/16.
//  Copyright © 2016 Quickli. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShowQuestionAnswerViewController : UIViewController

@property(nonatomic, strong)UIColor *barTintColor;
@property(nonatomic, strong)UIColor *tintColor;
@property(nonatomic, strong)UIColor *titleColor;
@property(nonatomic, strong)UIColor *sendButtonTitleColor;

@property(nonatomic, strong)NSString *titleName;
@property(nonatomic, strong)NSString *questionId;
@property(nonatomic, strong)NSString *categoryId;
@property(nonatomic, strong)NSString *answerOfQuestion;
@property BOOL isSearch;
@end

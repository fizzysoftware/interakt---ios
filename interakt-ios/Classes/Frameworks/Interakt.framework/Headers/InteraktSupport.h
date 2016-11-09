//
//  InteraktSupport.h
//  InteraktSDK
//
//  Created by Interakt on 14/10/16.
//  Copyright © 2016 Interakt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface InteraktSupport : NSObject

@property(nonatomic, strong)UIColor *barTintColor;
@property(nonatomic, strong)UIColor *tintColor;
@property(nonatomic, strong)UIColor *titleColor;
@property(nonatomic, strong)UIColor *sendButtonTitleColor;
@property(nonatomic, strong)UIColor *sendButtonBackGroundColor;


@property (nonatomic, strong) NSString *apiKey;
@property (nonatomic, strong) NSString *appID;

/** Returns an instance of Interakt
 *
 * When calling any Interakt instance method you must use sharedInstance. 
 * @available Available in SDK version 0.1.0 or later
 */
+ (InteraktSupport *)sharedInstance;



- (void)showHelpdesk:(UIViewController *)viewController;



- (void)showFaq:(UIViewController *)viewController;



- (void)showChat:(UIViewController *)viewController;



- (void)installForApiKey:(NSString *)apiKey appID:(NSString *)appID;



- (void)setColorConfigurationWithBarBackgroundColor:(UIColor *)navigationBarTintColor  titleColor:(UIColor *)titleColor tintColor:(UIColor *)tintColor sendQueryButtonTitleColor:(UIColor *)queryColorButton andSendQueryButtonBackgroundColor:(UIColor *)queryBackGroundColor;

@end

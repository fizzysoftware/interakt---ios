//
//  CategoryViewController.h
//  InteraktSDK
//
//  Created by Interakt on 20/10/16.
//  Copyright © 2016 Interakt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InteraktCategoryViewController : UIViewController

@property(nonatomic, strong)UIColor *barTintColor;
@property(nonatomic, strong)UIColor *tintColor;
@property(nonatomic, strong)UIColor *titleColor;
//@property(nonatomic, strong)UIColor *sendButtonBackgroundColor;
@property(nonatomic, strong)UIColor *sendButtonTitleColor;

@property(nonatomic, strong)NSString *titleName;
@property(nonatomic, strong)NSString *categoryId;
@end

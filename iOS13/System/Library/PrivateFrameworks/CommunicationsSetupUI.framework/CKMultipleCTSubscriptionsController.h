/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController {

	NSString* _defaultsKey;
	NSString* _headerKey;
	NSString* _controllerTitle;
	NSArray* _ctSubscriptions;

}

@property (nonatomic,copy) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * headerKey;                     //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,copy) NSString * controllerTitle;               //@synthesize controllerTitle=_controllerTitle - In the implementation block
@property (nonatomic,retain) NSArray * ctSubscriptions;              //@synthesize ctSubscriptions=_ctSubscriptions - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(id)specifiers;
-(NSString *)defaultsKey;
-(void)setHeaderKey:(NSString *)arg1 ;
-(NSString *)headerKey;
-(void)setCtSubscriptions:(NSArray *)arg1 ;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(void)setControllerTitle:(NSString *)arg1 ;
-(NSArray *)ctSubscriptions;
-(void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2 ;
-(id)isEnabledForSubscription:(id)arg1 ;
-(NSString *)controllerTitle;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(NSString *)defaultsKey;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(NSString *)headerKey;
-(void)setCtSubscriptions:(NSArray *)arg1 ;
-(void)setControllerTitle:(NSString *)arg1 ;
-(NSArray *)ctSubscriptions;
-(void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2 ;
-(id)isEnabledForSubscription:(id)arg1 ;
-(NSString *)controllerTitle;
@end


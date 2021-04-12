/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/


@protocol CCUIContentModuleContextDelegate;
@class NSString;

@interface CCUIContentModuleContext : NSObject {

	NSString* _moduleIdentifier;
	id<CCUIContentModuleContextDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                                //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIContentModuleContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(void)performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
+(id)_sharedOpenApplicationOptions;
+(id)_sharedOpenAppService;
+(BOOL)areAnimationsPermitted;
+(void)setAnimationsPermitted:(BOOL)arg1 ;
-(id<CCUIContentModuleContextDelegate>)delegate;
-(void)setDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)moduleIdentifier;
-(void)dismissModule;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithModuleIdentifier:(id)arg1 ;
-(void)requestAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enqueueStatusUpdate:(id)arg1 ;
-(void)setHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)requestExpandModule;
-(void)dismissControlCenter;
@end


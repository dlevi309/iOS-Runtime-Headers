/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)areAnimationsPermitted;
+(id)_sharedOpenApplicationOptions;
+(void)performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
+(void)setAnimationsPermitted:(BOOL)arg1 ;
+(id)_sharedOpenAppService;
-(void)setHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)dismissControlCenter;
-(id<CCUIContentModuleContextDelegate>)delegate;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)moduleIdentifier;
-(void)setDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
-(void)dismissModule;
-(void)openApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enqueueStatusUpdate:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestExpandModule;
-(void)requestLayoutSizeUpdate;
-(void)requestAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FACircleRemoteUIDelegateDelegate.h>

@class RemoteUIController, FACircleRemoteUIDelegate, UIViewController, RUIStyle, NSString;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate> {

	RemoteUIController* _remoteUIController;
	FACircleRemoteUIDelegate* _remoteUIDelegate;
	/*^block*/id _completion;
	UIViewController* _presenter;
	RUIStyle* _customRUIStyle;

}

@property (nonatomic,retain) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) RUIStyle * customRUIStyle;                 //@synthesize customRUIStyle=_customRUIStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController *)presenter;
-(void)loadRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)FACircleRemoteUIDelegate:(id)arg1 completedWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithPresenter:(id)arg1 context:(id)arg2 ;
-(void)setCustomRUIStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)customRUIStyle;
-(id)_serverHookHandlerWithRemoteUIController:(id)arg1 ;
@end


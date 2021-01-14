/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FACircleRemoteUIDelegateDelegate.h>

@protocol FACirclePresenterDelegate;
@class RemoteUIController, FACircleRemoteUIDelegate, FAProfilePictureStore, UIViewController, RUIStyle, NSString;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate> {

	RemoteUIController* _remoteUIController;
	FACircleRemoteUIDelegate* _remoteUIDelegate;
	FAProfilePictureStore* _familyPictureStore;
	/*^block*/id _completion;
	UIViewController* _presenter;
	RUIStyle* _customRUIStyle;
	id<FACirclePresenterDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) RUIStyle * customRUIStyle;                 //@synthesize customRUIStyle=_customRUIStyle - In the implementation block
@property (__weak) id<FACirclePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresenter:(UIViewController *)arg1 ;
-(id)init;
-(void)loadRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<FACirclePresenterDelegate>)delegate;
-(UIViewController *)presenter;
-(void)setDelegate:(id<FACirclePresenterDelegate>)arg1 ;
-(void)circleRemoteUIDelegate:(id)arg1 completedWithResponse:(id)arg2 ;
-(void)circleRemoteUIDelegateDidPresent:(id)arg1 ;
-(id)initWithPresenter:(id)arg1 context:(id)arg2 ;
-(void)setCustomRUIStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)customRUIStyle;
-(id)_serverHookHandlerWithRemoteUIController:(id)arg1 ;
@end


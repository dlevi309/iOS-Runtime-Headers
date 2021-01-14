/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCCarPlayBannerContentViewDelegate.h>
#import <libobjc.A.dylib/BNPresentable.h>
#import <libobjc.A.dylib/BNPresentableObservable.h>
#import <libobjc.A.dylib/BNPresentableUniquelyIdentifying.h>

@protocol NCCarPlayBannerPresentableViewControllerDelegate;
@class NSUUID, NCCarPlayBannerContentView, NSHashTable, UITapGestureRecognizer, NCNotificationRequest, NSString, UIViewController;

@interface NCCarPlayBannerPresentableViewController : UIViewController <NCCarPlayBannerContentViewDelegate, BNPresentable, BNPresentableObservable, BNPresentableUniquelyIdentifying> {

	NCCarPlayBannerContentView* _bannerContentView;
	NSHashTable* _observers;
	UITapGestureRecognizer* _contentSelectPressGesture;
	BOOL _fillsContainer;
	NSUUID* _uniqueIdentifier;
	NCNotificationRequest* _notificationRequest;
	id<NCCarPlayBannerPresentableViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                                          //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (assign,nonatomic,__weak) id<NCCarPlayBannerPresentableViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL fillsContainer;                                                                    //@synthesize fillsContainer=_fillsContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)requesterIdentifier;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(NSString *)requestIdentifier;
-(id<NCCarPlayBannerPresentableViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)requesterIdentifier;
-(void)setDelegate:(id<NCCarPlayBannerPresentableViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(UIViewController *)viewController;
-(id)_platterView;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(void)viewDidLoad;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)loadView;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(CGSize)preferredContentSizeWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(id)presentableDescription;
-(void)invalidateDisplayProperties;
-(BOOL)bannerContentViewShouldShowOKButton:(id)arg1 ;
-(void)updateRequestToInstance:(id)arg1 ;
-(void)_handleTapOnContent:(id)arg1 ;
-(void)_handleBackGesture:(id)arg1 ;
-(void)_handleSwipeGesture:(id)arg1 ;
-(void)addPresentableObserver:(id)arg1 ;
-(void)removePresentableObserver:(id)arg1 ;
-(UIEdgeInsets)bannerContentOutsets;
-(BOOL)fillsContainer;
-(void)setFillsContainer:(BOOL)arg1 ;
@end


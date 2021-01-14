/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXActivityActionDelegate.h>

@protocol PXActionPerformerDelegate, PXAnonymousViewController;
@class NSString, NSObject;

@interface PXActionPerformer : NSObject <PXActivityActionDelegate> {

	/*^block*/id _completionHandler;
	BOOL _success;
	BOOL _cancellable;
	NSString* _actionType;
	id _sender;
	unsigned long long _state;
	id<PXActionPerformerDelegate> _delegate;
	NSObject*<PXAnonymousViewController> _presentedViewController;
	/*^block*/id _viewControllerPresenter;
	/*^block*/id _viewControllerDismisser;

}

@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSString * activitySystemImageName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<PXAnonymousViewController> hostViewController; 
@property (nonatomic,readonly) NSString * actionType;                                                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) BOOL success;                                                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic,__weak) id sender;                                                            //@synthesize sender=_sender - In the implementation block
@property (getter=isCancellable,nonatomic,readonly) BOOL cancellable;                                     //@synthesize cancellable=_cancellable - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousViewController> presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy) id viewControllerPresenter;                                                    //@synthesize viewControllerPresenter=_viewControllerPresenter - In the implementation block
@property (nonatomic,copy) id viewControllerDismisser;                                                    //@synthesize viewControllerDismisser=_viewControllerDismisser - In the implementation block
+(BOOL)canPerformBlacklistingOnAssetCollection:(id)arg1 ;
-(BOOL)success;
-(BOOL)isCancellable;
-(NSString *)actionType;
-(void)performActivity:(id)arg1 ;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(NSString *)activityType;
-(BOOL)presentViewController:(id)arg1 ;
-(id)init;
-(id<PXActionPerformerDelegate>)delegate;
-(void)performUserInteractionTask;
-(id)activity;
-(NSObject*<PXAnonymousViewController>)hostViewController;
-(void)setDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(BOOL)requiresUnlockedDevice;
-(BOOL)pushViewController:(id)arg1 ;
-(id)viewControllerDismisser;
-(void)setViewControllerDismisser:(id)arg1 ;
-(NSString *)description;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(id)initWithActionType:(id)arg1 ;
-(NSString *)activitySystemImageName;
-(void)setViewControllerPresenter:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(id)alertAction;
-(BOOL)performerResetsAfterCompletion;
-(id)viewControllerPresenter;
-(void)_performUnlockIfNeeded;
-(void)_completeUnlockTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)dismissViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)performBackgroundTask;
-(void)completeBackgroundTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_transitionToState:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_completeStateWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)disambiguationMenuForUseCase:(unsigned long long)arg1 withMenuActionHandler:(/*^block*/id)arg2 ;
-(NSObject*<PXAnonymousViewController>)presentedViewController;
@end


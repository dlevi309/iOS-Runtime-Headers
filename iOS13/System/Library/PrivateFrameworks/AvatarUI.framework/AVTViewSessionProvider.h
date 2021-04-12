/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTViewSessionDelegate.h>
#import <libobjc.A.dylib/AVTViewLayoutInfo.h>

@protocol AVTViewSessionProviderDelegate;
@class AVTFaceTrackingManager, UIView, AVTView, AVTViewUpdater, AVTViewSession, NSNotificationCenter, AVTUIEnvironment, NSString;

@interface AVTViewSessionProvider : NSObject <AVTViewSessionDelegate, AVTViewLayoutInfo> {

	id<AVTViewSessionProviderDelegate> _delegate;
	AVTFaceTrackingManager* _faceTrackingManager;
	/*^block*/id _viewCreator;
	UIView* _avtViewContainer;
	AVTView* _avtView;
	AVTViewUpdater* _avtViewUpdater;
	AVTViewSession* _activeSession;
	AVTViewSession* _pendingSession;
	AVTViewSession* _pausedTrackingSession;
	NSNotificationCenter* _notificationCenter;
	AVTUIEnvironment* _environment;
	CGSize _avtViewBackingSize;

}

@property (nonatomic,copy,readonly) id viewCreator;                                           //@synthesize viewCreator=_viewCreator - In the implementation block
@property (nonatomic,retain) UIView * avtViewContainer;                                       //@synthesize avtViewContainer=_avtViewContainer - In the implementation block
@property (nonatomic,retain) AVTView * avtView;                                               //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,retain) AVTViewUpdater * avtViewUpdater;                                 //@synthesize avtViewUpdater=_avtViewUpdater - In the implementation block
@property (nonatomic,retain) AVTViewSession * activeSession;                                  //@synthesize activeSession=_activeSession - In the implementation block
@property (nonatomic,retain) AVTViewSession * pendingSession;                                 //@synthesize pendingSession=_pendingSession - In the implementation block
@property (nonatomic,retain) AVTViewSession * pausedTrackingSession;                          //@synthesize pausedTrackingSession=_pausedTrackingSession - In the implementation block
@property (nonatomic,retain) AVTFaceTrackingManager * faceTrackingManager;                    //@synthesize faceTrackingManager=_faceTrackingManager - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                     //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) CGSize avtViewBackingSize;                                     //@synthesize avtViewBackingSize=_avtViewBackingSize - In the implementation block
@property (assign,nonatomic,__weak) id<AVTViewSessionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)creatorForAVTView;
+(CGSize)backingSizeForEnvironment:(id)arg1 ;
+(/*^block*/id)creatorForAVTRecordView;
-(void)dealloc;
-(id<AVTViewSessionProviderDelegate>)delegate;
-(void)setDelegate:(id<AVTViewSessionProviderDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(NSNotificationCenter *)notificationCenter;
-(AVTView *)avtView;
-(void)setAvtView:(AVTView *)arg1 ;
-(id)initWithAVTViewBackingSize:(CGSize)arg1 viewCreator:(/*^block*/id)arg2 environment:(id)arg3 ;
-(AVTViewUpdater *)avtViewUpdater;
-(void)setAvtViewContainer:(UIView *)arg1 ;
-(void)setAvtViewUpdater:(AVTViewUpdater *)arg1 ;
-(void)sessionDidTearDown:(id)arg1 ;
-(UIView *)avtViewContainer;
-(CGSize)avtViewBackingSize;
-(AVTFaceTrackingManager *)faceTrackingManager;
-(id)sessionWithDidBecomeActiveHandler:(/*^block*/id)arg1 tearDownHandler:(/*^block*/id)arg2 ;
-(void)handleProviderTakesPrimaryStatusNotification:(id)arg1 ;
-(void)handleProviderReleasesPrimaryStatusNotification:(id)arg1 ;
-(void)setPendingSession:(AVTViewSession *)arg1 ;
-(AVTViewSession *)activeSession;
-(void)activateNextSession;
-(AVTViewSession *)pendingSession;
-(void)createContainerAndViewIfNeeded;
-(void)setActiveSession:(AVTViewSession *)arg1 ;
-(id)viewCreator;
-(void)setFaceTrackingManager:(AVTFaceTrackingManager *)arg1 ;
-(void)didLosePrimaryStatusWithSessionToPause:(id)arg1 ;
-(void)setPausedTrackingSession:(AVTViewSession *)arg1 ;
-(AVTViewSession *)pausedTrackingSession;
-(void)recoverPrimaryStatus;
@end


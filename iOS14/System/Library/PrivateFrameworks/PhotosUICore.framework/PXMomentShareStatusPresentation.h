/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXCPLUIStatusProvider, NSString, PXMomentShareStatus;

@interface PXMomentShareStatusPresentation : PXObservable <PXChangeObserver> {

	PXCPLUIStatusProvider* _statusProvider;
	BOOL _isPaused;
	BOOL _isReadyForUpdates;
	float _activityProgress;
	long long _type;
	NSString* _assetsTitle;
	NSString* _expirationTitle;
	NSString* _activityTitle;
	NSString* _idleTitle;
	NSString* _pauseTitle;
	NSString* _actionTitle;
	NSString* _actionConfirmationAlertTitle;
	NSString* _actionConfirmationAlertSubtitle;
	NSString* _actionConfirmationAlertButtonTitle;
	/*^block*/id _action;
	NSString* _byline;
	long long _state;
	long long _presentationStyle;
	PXMomentShareStatus* _momentShareStatus;
	long long _numberOfAssetsNotCopied;
	NSString* _pauseStatusDescription;
	NSString* _pauseResolutionActionTitle;
	NSString* _pauseResolutionActionConfirmationAlertTitle;
	NSString* _pauseResolutionActionConfirmationAlertSubtitle;
	NSString* _pauseResolutionActionConfirmationAlertButtonTitle;
	/*^block*/id _pauseResolutionAction;

}

@property (nonatomic,readonly) long long presentationStyle;                                           //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) PXMomentShareStatus * momentShareStatus;                               //@synthesize momentShareStatus=_momentShareStatus - In the implementation block
@property (nonatomic,copy) NSString * assetsTitle;                                                    //@synthesize assetsTitle=_assetsTitle - In the implementation block
@property (nonatomic,copy) NSString * expirationTitle;                                                //@synthesize expirationTitle=_expirationTitle - In the implementation block
@property (nonatomic,copy) NSString * activityTitle;                                                  //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,copy) NSString * idleTitle;                                                      //@synthesize idleTitle=_idleTitle - In the implementation block
@property (nonatomic,copy) NSString * pauseTitle;                                                     //@synthesize pauseTitle=_pauseTitle - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                                                    //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionConfirmationAlertTitle;                                   //@synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle - In the implementation block
@property (nonatomic,copy) NSString * actionConfirmationAlertSubtitle;                                //@synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,copy) NSString * actionConfirmationAlertButtonTitle;                             //@synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id action;                                                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * byline;                                                         //@synthesize byline=_byline - In the implementation block
@property (assign,nonatomic) float activityProgress;                                                  //@synthesize activityProgress=_activityProgress - In the implementation block
@property (assign,nonatomic) long long numberOfAssetsNotCopied;                                       //@synthesize numberOfAssetsNotCopied=_numberOfAssetsNotCopied - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                                                           //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,copy) NSString * pauseStatusDescription;                                         //@synthesize pauseStatusDescription=_pauseStatusDescription - In the implementation block
@property (nonatomic,copy) NSString * pauseResolutionActionTitle;                                     //@synthesize pauseResolutionActionTitle=_pauseResolutionActionTitle - In the implementation block
@property (nonatomic,copy) NSString * pauseResolutionActionConfirmationAlertTitle;                    //@synthesize pauseResolutionActionConfirmationAlertTitle=_pauseResolutionActionConfirmationAlertTitle - In the implementation block
@property (nonatomic,copy) NSString * pauseResolutionActionConfirmationAlertSubtitle;                 //@synthesize pauseResolutionActionConfirmationAlertSubtitle=_pauseResolutionActionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,copy) NSString * pauseResolutionActionConfirmationAlertButtonTitle;              //@synthesize pauseResolutionActionConfirmationAlertButtonTitle=_pauseResolutionActionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id pauseResolutionAction;                                                  //@synthesize pauseResolutionAction=_pauseResolutionAction - In the implementation block
@property (assign,nonatomic) BOOL isReadyForUpdates;                                                  //@synthesize isReadyForUpdates=_isReadyForUpdates - In the implementation block
@property (nonatomic,readonly) id<PXDisplayMomentShare> momentShare; 
@property (nonatomic,readonly) long long type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(long long)presentationStyle;
-(NSString *)byline;
-(void)setActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(NSString *)idleTitle;
-(id)init;
-(void)_updateCPLStatus;
-(void)setAssetsTitle:(NSString *)arg1 ;
-(id)initWithMomentShareStatus:(id)arg1 presentationStyle:(long long)arg2 ;
-(id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2 ;
-(void)setExpirationTitle:(NSString *)arg1 ;
-(void)setIdleTitle:(NSString *)arg1 ;
-(void)setPauseTitle:(NSString *)arg1 ;
-(void)setByline:(NSString *)arg1 ;
-(void)setActivityProgress:(float)arg1 ;
-(void)setNumberOfAssetsNotCopied:(long long)arg1 ;
-(void)_updateCountsAndStatus;
-(NSString *)assetsTitle;
-(NSString *)expirationTitle;
-(NSString *)pauseTitle;
-(float)activityProgress;
-(long long)numberOfAssetsNotCopied;
-(NSString *)pauseStatusDescription;
-(void)setPauseStatusDescription:(NSString *)arg1 ;
-(NSString *)pauseResolutionActionTitle;
-(void)setPauseResolutionActionTitle:(NSString *)arg1 ;
-(NSString *)pauseResolutionActionConfirmationAlertTitle;
-(void)setPauseResolutionActionConfirmationAlertTitle:(NSString *)arg1 ;
-(id)pauseResolutionAction;
-(void)setIsReadyForUpdates:(BOOL)arg1 ;
-(NSString *)pauseResolutionActionConfirmationAlertSubtitle;
-(void)setPauseResolutionActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(NSString *)pauseResolutionActionConfirmationAlertButtonTitle;
-(void)setPauseResolutionActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(void)setPauseResolutionAction:(id)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)didPerformChanges;
-(id)action;
-(PXMomentShareStatus *)momentShareStatus;
-(void)setType:(long long)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)actionTitle;
-(void)setIsPaused:(BOOL)arg1 ;
-(NSString *)actionConfirmationAlertButtonTitle;
-(void)setActionConfirmationAlertTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertTitle;
-(NSString *)description;
-(void)setActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertSubtitle;
-(void)setActivityTitle:(NSString *)arg1 ;
-(long long)type;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id<PXDisplayMomentShare>)momentShare;
-(NSString *)activityTitle;
-(BOOL)isPaused;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)isReadyForUpdates;
@end


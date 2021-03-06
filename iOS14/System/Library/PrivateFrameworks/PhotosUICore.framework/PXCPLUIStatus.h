/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString;

@interface PXCPLUIStatus : NSObject {

	BOOL _paused;
	BOOL _inResetSync;
	BOOL _hasCompletedInitialSync;
	BOOL _isExiting;
	float _progress;
	NSString* _stateDescription;
	NSString* _failureDescription;
	NSString* _actionTitle;
	NSString* _actionConfirmationAlertTitle;
	NSString* _actionConfirmationAlertSubtitle;
	NSString* _actionConfirmationAlertButtonTitle;
	/*^block*/id _action;
	NSString* _referencedItemsDescription;
	long long _state;
	unsigned long long _activity;
	long long _pauseReason;
	unsigned long long _numberOfItemsFailingToUpload;
	unsigned long long _numberOfPhotoAssets;
	unsigned long long _numberOfVideoAssets;
	unsigned long long _numberOfOtherAssets;
	long long _serviceAction;

}

@property (nonatomic,retain) NSString * stateDescription;                                  //@synthesize stateDescription=_stateDescription - In the implementation block
@property (nonatomic,retain) NSString * failureDescription;                                //@synthesize failureDescription=_failureDescription - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                  //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSString * actionTitle;                                       //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,retain) NSString * actionConfirmationAlertTitle;                      //@synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle - In the implementation block
@property (nonatomic,retain) NSString * actionConfirmationAlertSubtitle;                   //@synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,retain) NSString * actionConfirmationAlertButtonTitle;                //@synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id action;                                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * referencedItemsDescription;                        //@synthesize referencedItemsDescription=_referencedItemsDescription - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long activity;                                  //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) long long pauseReason;                                        //@synthesize pauseReason=_pauseReason - In the implementation block
@property (assign,nonatomic) long long serviceAction;                                      //@synthesize serviceAction=_serviceAction - In the implementation block
@property (assign,nonatomic) BOOL inResetSync;                                             //@synthesize inResetSync=_inResetSync - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedInitialSync;                                 //@synthesize hasCompletedInitialSync=_hasCompletedInitialSync - In the implementation block
@property (assign,nonatomic) BOOL isExiting;                                               //@synthesize isExiting=_isExiting - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsFailingToUpload;              //@synthesize numberOfItemsFailingToUpload=_numberOfItemsFailingToUpload - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotoAssets;                       //@synthesize numberOfPhotoAssets=_numberOfPhotoAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfVideoAssets;                       //@synthesize numberOfVideoAssets=_numberOfVideoAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOtherAssets;                       //@synthesize numberOfOtherAssets=_numberOfOtherAssets - In the implementation block
-(float)progress;
-(void)setActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)activity;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)action;
-(void)setStateDescription:(NSString *)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)actionTitle;
-(BOOL)hasCompletedInitialSync;
-(NSString *)actionConfirmationAlertButtonTitle;
-(void)setActionConfirmationAlertTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertTitle;
-(void)setActivity:(unsigned long long)arg1 ;
-(id)description;
-(void)setActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertSubtitle;
-(BOOL)isExiting;
-(void)setProgress:(float)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(long long)pauseReason;
-(void)setFailureDescription:(NSString *)arg1 ;
-(NSString *)referencedItemsDescription;
-(void)setReferencedItemsDescription:(NSString *)arg1 ;
-(void)setPauseReason:(long long)arg1 ;
-(void)setInResetSync:(BOOL)arg1 ;
-(void)setHasCompletedInitialSync:(BOOL)arg1 ;
-(void)setIsExiting:(BOOL)arg1 ;
-(long long)serviceAction;
-(void)setServiceAction:(long long)arg1 ;
-(BOOL)inResetSync;
-(NSString *)stateDescription;
-(void)setNumberOfItemsFailingToUpload:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPhotoAssets;
-(void)setNumberOfPhotoAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVideoAssets;
-(void)setNumberOfVideoAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfOtherAssets;
-(void)setNumberOfOtherAssets:(unsigned long long)arg1 ;
-(BOOL)isPaused;
-(unsigned long long)numberOfItemsFailingToUpload;
-(NSString *)failureDescription;
-(BOOL)isEqual:(id)arg1 ;
@end


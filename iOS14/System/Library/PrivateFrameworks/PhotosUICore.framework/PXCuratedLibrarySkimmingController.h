/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCuratedLibrarySkimmingControllerDelegate;
@class UISelectionFeedbackGenerator, PXCuratedLibraryAssetCollectionSkimmingModel, PXAssetCollectionReference, NSArray, NSTimer, NSString;

@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver> {

	UISelectionFeedbackGenerator* _skimmingFeedbackGenerator;
	double _slideshowTriggerDelay;
	double _slideshowIntervalDelay;
	BOOL _skimmingSlideshowEnabled;
	PXCuratedLibraryAssetCollectionSkimmingModel* _skimmingModel;
	id<PXCuratedLibrarySkimmingControllerDelegate> _delegate;
	long long _state;
	PXAssetCollectionReference* _preSkimmedAssetCollectionReference;
	double _lastPanningTranslation;
	long long _currentSkimmingIndex;
	NSArray* _skimmingIndexes;
	unsigned long long _skimmingDataSourceIdentifier;
	NSTimer* _slideshowTimer;

}

@property (nonatomic,retain) PXAssetCollectionReference * preSkimmedAssetCollectionReference;              //@synthesize preSkimmedAssetCollectionReference=_preSkimmedAssetCollectionReference - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double lastPanningTranslation;                                                //@synthesize lastPanningTranslation=_lastPanningTranslation - In the implementation block
@property (assign,nonatomic) long long currentSkimmingIndex;                                               //@synthesize currentSkimmingIndex=_currentSkimmingIndex - In the implementation block
@property (nonatomic,retain) NSArray * skimmingIndexes;                                                    //@synthesize skimmingIndexes=_skimmingIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long skimmingDataSourceIdentifier;                              //@synthesize skimmingDataSourceIdentifier=_skimmingDataSourceIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * slideshowTimer;                                                     //@synthesize slideshowTimer=_slideshowTimer - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetCollectionSkimmingModel * skimmingModel;               //@synthesize skimmingModel=_skimmingModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibrarySkimmingControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skimmingSlideshowEnabled;                                                //@synthesize skimmingSlideshowEnabled=_skimmingSlideshowEnabled - In the implementation block
@property (nonatomic,readonly) BOOL canStartSkimming; 
@property (nonatomic,readonly) BOOL isTouching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(long long)currentSkimmingIndex;
-(void)setPreSkimmedAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)_stopSlideshow;
-(id)init;
-(unsigned long long)skimmingDataSourceIdentifier;
-(id<PXCuratedLibrarySkimmingControllerDelegate>)delegate;
-(void)setSkimmingIndexes:(NSArray *)arg1 ;
-(void)_slideshowTimerTick:(id)arg1 ;
-(void)setCurrentSkimmingIndex:(long long)arg1 ;
-(void)_enterTouchingStateForAssetCollectionReference:(id)arg1 ;
-(BOOL)endTouchingGestureEnded:(BOOL)arg1 ;
-(void)updatePanningWithTranslation:(CGPoint)arg1 ;
-(void)_startOrResumeSlideshowTouchesEnded:(BOOL)arg1 ;
-(void)startTouchingForAssetCollectionReference:(id)arg1 ;
-(void)_ensureFeedbackGenerator;
-(NSTimer *)slideshowTimer;
-(void)_generateFeedbackForSkimmingGesture;
-(void)_enterSlideshowStateForAssetCollectionReference:(id)arg1 ;
-(void)setDelegate:(id<PXCuratedLibrarySkimmingControllerDelegate>)arg1 ;
-(void)setSkimmingSlideshowEnabled:(BOOL)arg1 ;
-(BOOL)canStartSkimming;
-(void)setSkimmingDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)startPanningForAssetCollectionReference:(id)arg1 ;
-(void)setSlideshowTimer:(NSTimer *)arg1 ;
-(void)contentViewDidScroll;
-(id)initWithSkimmingModel:(id)arg1 ;
-(BOOL)skimmingSlideshowEnabled;
-(PXAssetCollectionReference *)preSkimmedAssetCollectionReference;
-(void)_enterIdleStatePersistSkimmingState:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)_cancelEnteringTouchingState;
-(void)setLastPanningTranslation:(double)arg1 ;
-(long long)state;
-(BOOL)isTouching;
-(void)_cleanupFeedbackGenerator;
-(void)endPanning;
-(void)contentViewWillScroll;
-(NSArray *)skimmingIndexes;
-(double)lastPanningTranslation;
-(void)_adoptIndexesFromSkimmingModel;
-(void)_updateSlideshow;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCuratedLibraryAssetCollectionSkimmingModel *)skimmingModel;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AXGestureRecorderViewDelegate.h>
#import <libobjc.A.dylib/AXGestureRecorderFingerPathCollectionDelegate.h>

@protocol AXGestureRecorderViewControllerDelegate;
@class AXGestureRecorderStyleProvider, AXGestureRecorderFingerPathCollection, NSMutableArray, NSMutableDictionary, AXGestureRecorderView, NSString;

@interface AXGestureRecorderViewController : UIViewController <AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate> {

	BOOL _shouldPreventFurtherRecording;
	BOOL _trackingTouches;
	BOOL _inReplayMode;
	AXGestureRecorderStyleProvider* _styleProvider;
	id<AXGestureRecorderViewControllerDelegate> _delegate;
	AXGestureRecorderFingerPathCollection* _fingerPathCollection;
	AXGestureRecorderFingerPathCollection* _dynamicFingerPathCollection;
	double _trackingTouchesDidStartTimeInterval;
	unsigned long long _replayTimestampIndex;
	unsigned long long _replayTimestampsCount;
	NSMutableArray* _replayDynamicFingerPaths;
	long long _recorderType;
	NSMutableDictionary* _instantReplayTimestampIndexes;
	NSMutableDictionary* _instantReplayPartialFingerPaths;

}

@property (nonatomic,retain) AXGestureRecorderFingerPathCollection * fingerPathCollection;                     //@synthesize fingerPathCollection=_fingerPathCollection - In the implementation block
@property (nonatomic,retain) AXGestureRecorderFingerPathCollection * dynamicFingerPathCollection;              //@synthesize dynamicFingerPathCollection=_dynamicFingerPathCollection - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventFurtherRecording;                                               //@synthesize shouldPreventFurtherRecording=_shouldPreventFurtherRecording - In the implementation block
@property (assign,getter=isTrackingTouches,nonatomic) BOOL trackingTouches;                                    //@synthesize trackingTouches=_trackingTouches - In the implementation block
@property (assign,nonatomic) double trackingTouchesDidStartTimeInterval;                                       //@synthesize trackingTouchesDidStartTimeInterval=_trackingTouchesDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) BOOL inReplayMode;                                          //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampIndex;                                          //@synthesize replayTimestampIndex=_replayTimestampIndex - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampsCount;                                         //@synthesize replayTimestampsCount=_replayTimestampsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * replayDynamicFingerPaths;                                        //@synthesize replayDynamicFingerPaths=_replayDynamicFingerPaths - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * instantReplayTimestampIndexes;                              //@synthesize instantReplayTimestampIndexes=_instantReplayTimestampIndexes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * instantReplayPartialFingerPaths;                            //@synthesize instantReplayPartialFingerPaths=_instantReplayPartialFingerPaths - In the implementation block
@property (nonatomic,retain) AXGestureRecorderStyleProvider * styleProvider;                                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AXGestureRecorderView * gestureRecorderView; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) long long recorderType;                                                           //@synthesize recorderType=_recorderType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recordedReplayableGestureRepresentation;
-(id)recordedGesturePropertyListRepresentationWithName:(id)arg1 ;
-(BOOL)isInReplayMode;
-(id<AXGestureRecorderViewControllerDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<AXGestureRecorderViewControllerDelegate>)arg1 ;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didInsertFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didUpdateFingerPathAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg1 ;
-(void)gestureRecorderView:(id)arg1 setChromeVisible:(BOOL)arg2 ;
-(BOOL)canToggleChromeForGestureRecorderView:(id)arg1 ;
-(BOOL)isChromeVisibleForGestureRecorderView:(id)arg1 ;
-(id)gestureRecorderView:(id)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2 ;
-(AXGestureRecorderFingerPathCollection *)fingerPathCollection;
-(AXGestureRecorderFingerPathCollection *)dynamicFingerPathCollection;
-(void)setFingerPathCollection:(AXGestureRecorderFingerPathCollection *)arg1 ;
-(void)setDynamicFingerPathCollection:(AXGestureRecorderFingerPathCollection *)arg1 ;
-(void)setShouldPreventFurtherRecording:(BOOL)arg1 ;
-(void)setTrackingTouches:(BOOL)arg1 ;
-(void)_endInstantReplay;
-(void)_exitReplayMode;
-(void)setReplayTimestampIndex:(unsigned long long)arg1 ;
-(void)setReplayTimestampsCount:(unsigned long long)arg1 ;
-(void)_advanceReplay;
-(void)_freezeAllDynamicFingerPaths;
-(unsigned long long)replayTimestampIndex;
-(unsigned long long)replayTimestampsCount;
-(NSMutableArray *)replayDynamicFingerPaths;
-(void)setReplayDynamicFingerPaths:(NSMutableArray *)arg1 ;
-(void)_didFinishReplayingRecordedGesture;
-(NSMutableDictionary *)instantReplayTimestampIndexes;
-(void)setInstantReplayTimestampIndexes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)instantReplayPartialFingerPaths;
-(void)reloadAllFingerPaths;
-(long long)recorderType;
-(void)setRecorderType:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setInstantReplayPartialFingerPaths:(NSMutableDictionary *)arg1 ;
-(void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1 ;
-(void)_advanceInstantReplayForStaticFingerAtIndex:(id)arg1 ;
-(void)_clearWeakReferencesWithOutlets;
-(void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldPreventFurtherRecording;
-(BOOL)isTrackingTouches;
-(void)_didStartRecordingAtomicFingerPathAtPoint:(CGPoint)arg1 ;
-(void)setTrackingTouchesDidStartTimeInterval:(double)arg1 ;
-(double)trackingTouchesDidStartTimeInterval;
-(void)_releaseOutlets;
-(AXGestureRecorderView *)gestureRecorderView;
-(AXGestureRecorderStyleProvider *)styleProvider;
-(void)loadView;
-(BOOL)isEmpty;
-(void)setStyleProvider:(AXGestureRecorderStyleProvider *)arg1 ;
-(void)_updateDynamicFingerPathsWithTouches:(id)arg1 touchesDidEnd:(BOOL)arg2 ;
-(double)_maximumDurationOfRecordedGesture;
-(void)_didStopRecordingAtomicFingerPath;
-(void)freezeAllDynamicFingerPaths;
-(void)preventFurtherRecording;
-(void)setInReplayMode:(BOOL)arg1 ;
-(void)replayRecordedGesture;
-(void)deleteAllFingerPaths;
-(void)hideStaticView;
-(void)dealloc;
@end


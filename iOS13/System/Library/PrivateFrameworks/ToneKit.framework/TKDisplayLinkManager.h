/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _activeObservers;
	NSMutableDictionary* _updatedObservers;
	BOOL _hasUpdatedObservers;
	BOOL _isHandlingDisplayRefresh;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(double)duration;
-(BOOL)isPaused;
-(id)_displayLink;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(void)_setDisplayLink:(id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_prepareUpdatedObserversForModification;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(BOOL)_isWarmUpModeEnabled;
-(id)addObserverWithHandler:(/*^block*/id)arg1 ;
@end


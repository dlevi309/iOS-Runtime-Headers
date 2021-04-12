/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)timestamp;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(id)_displayLink;
-(void)_setDisplayLink:(id)arg1 ;
-(double)duration;
-(BOOL)isPaused;
-(void)dealloc;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_prepareUpdatedObserversForModification;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(BOOL)_isWarmUpModeEnabled;
-(id)addObserverWithHandler:(/*^block*/id)arg1 ;
@end


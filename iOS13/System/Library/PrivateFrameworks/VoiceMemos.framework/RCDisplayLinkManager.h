/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol RCTimeController;
@class CADisplayLink, NSHashTable;

@interface RCDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSHashTable* _observers;
	id<RCTimeController> _timeController;

}

@property (nonatomic,retain) id<RCTimeController> timeController;              //@synthesize timeController=_timeController - In the implementation block
@property (assign,nonatomic) BOOL paused; 
+(id)sharedManager;
-(id)init;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(id<RCTimeController>)timeController;
-(void)setTimeController:(id<RCTimeController>)arg1 ;
-(void)addDisplayLinkObserver:(id)arg1 ;
-(void)removeDisplayLinkObserver:(id)arg1 ;
@end


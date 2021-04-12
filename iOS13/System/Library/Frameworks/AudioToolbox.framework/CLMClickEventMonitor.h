/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
*/


#import <libAudioDSP.dylib/libAudioDSP.dylib-Structs.h>
@class NSMutableArray;

@interface CLMClickEventMonitor : NSObject {

	NSMutableArray* _events;
	shared_ptr<HIDEventMonitor>* _hidEventMonitor;

}

@property (retain) NSMutableArray * events;                                             //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) shared_ptr<HIDEventMonitor>* hidEventMonitor;              //@synthesize hidEventMonitor=_hidEventMonitor - In the implementation block
-(id)init;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(id)initWithHIDDispatchQueueQOSClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 ;
-(shared_ptr<HIDEventMonitor>*)hidEventMonitor;
-(void)setHidEventMonitor:(shared_ptr<HIDEventMonitor>*)arg1 ;
-(void)newClickEvent:(id)arg1 ;
@end


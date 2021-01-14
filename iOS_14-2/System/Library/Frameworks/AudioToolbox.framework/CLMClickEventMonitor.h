/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(id)initWithHIDDispatchQueueQOSClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 ;
-(shared_ptr<HIDEventMonitor>*)hidEventMonitor;
-(void)setHidEventMonitor:(shared_ptr<HIDEventMonitor>*)arg1 ;
-(void)newClickEvent:(id)arg1 ;
@end


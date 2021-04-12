/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSMutableDictionary;

@interface _WKTouchEventGenerator : NSObject {

	IOHIDEventSystemClientRef _ioSystemClient;
	SCD_Struct_WK6 _activePoints[5];
	unsigned long long _activePointCount;
	NSMutableDictionary* _eventCallbacks;

}

@property (nonatomic,retain) NSMutableDictionary * eventCallbacks;              //@synthesize eventCallbacks=_eventCallbacks - In the implementation block
+(long long)nextEventCallbackID;
+(id)sharedTouchEventGenerator;
-(id)init;
-(void)liftUp:(CGPoint)arg1 ;
-(IOHIDEventRef)_createIOHIDEventType:(int)arg1 ;
-(BOOL)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)touchDownAtPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 ;
-(void)liftUpAtPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 ;
-(void)liftUp:(CGPoint)arg1 touchCount:(unsigned long long)arg2 ;
-(void)_updateTouchPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableDictionary *)eventCallbacks;
-(void)touchDown:(CGPoint)arg1 touchCount:(unsigned long long)arg2 ;
-(BOOL)_sendMarkerHIDEventWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)moveToPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3 ;
-(void)touchDown:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)liftUp:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)moveToPoint:(CGPoint)arg1 duration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receivedHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setEventCallbacks:(NSMutableDictionary *)arg1 ;
-(void)touchDown:(CGPoint)arg1 ;
-(void)dealloc;
@end


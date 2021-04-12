/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(double)markEventEnd:(id)arg1 ;
-(id)init;
-(void)start;
-(void)stop;
-(id)description;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)reset;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(unsigned long long)elapsedTimeInNanoseconds;
-(BOOL)usesSignalFlags;
@end


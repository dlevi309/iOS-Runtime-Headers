/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)stop;
-(void)start;
-(void)reset;
-(unsigned long long)elapsedTimeInNanoseconds;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(BOOL)usesSignalFlags;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
@end


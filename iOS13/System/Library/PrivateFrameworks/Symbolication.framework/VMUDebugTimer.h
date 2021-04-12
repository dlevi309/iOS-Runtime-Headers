/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class NSDate, NSString;

@interface VMUDebugTimer : NSObject {

	NSDate* _programStartTime;
	NSDate* _eventStartTime;
	NSString* _eventMessage;

}
+(id)sharedTimer;
+(id)sharedTimerIfCreated;
-(id)init;
-(void)stop;
-(void)_endEvent;
-(void)startWithMessage:(id)arg1 ;
@end


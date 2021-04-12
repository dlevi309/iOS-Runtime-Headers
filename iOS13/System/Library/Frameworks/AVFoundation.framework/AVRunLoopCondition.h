/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)dealloc;
-(void)wait;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)signal;
-(void)broadcast;
-(void)waitInMode:(id)arg1 ;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)_signalRunLoopWithState:(id)arg1 ;
-(void)waitInMode:(id)arg1 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)wait;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)broadcast;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(void)dealloc;
@end


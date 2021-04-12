/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <Osprey/OspreyGRPCCallContext.h>

@class NSURLSessionStreamTask, NSMutableArray;

@interface OspreyGRPCBidiStreamingCallContext : OspreyGRPCCallContext {

	NSURLSessionStreamTask* _streamTask;
	NSMutableArray* _bufferedFrames;

}
-(void)_writeFrame:(id)arg1 streamTask:(id)arg2 ;
-(void)_handleStreamTask:(id)arg1 ;
-(void)writeFrame:(id)arg1 ;
@end


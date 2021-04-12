/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(id)nodeType;
-(void)makeOutputsLiveIfNeeded;
-(BOOL)stop:(id*)arg1 ;
@end


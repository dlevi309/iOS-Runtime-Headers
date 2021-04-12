/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
-(id)nodeType;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)makeOutputsLiveIfNeeded;
@end


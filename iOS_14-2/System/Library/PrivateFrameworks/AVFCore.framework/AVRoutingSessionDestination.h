/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject {

	AVRoutingSessionDestinationInternal* _ivars;

}

@property (nonatomic,readonly) NSArray * outputDeviceDescriptions; 
@property (nonatomic,readonly) float probability; 
@property (nonatomic,readonly) BOOL providesExternalVideoPlayback; 
-(float)probability;
-(id)init;
-(BOOL)providesExternalVideoPlayback;
-(id)initWithFigRoutingSessionDestination:(const CFDictionaryRef)arg1 ;
-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1 ;
-(NSArray *)outputDeviceDescriptions;
-(id)description;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject {

	AVRoutingSessionDestinationInternal* _ivars;

}

@property (nonatomic,readonly) NSArray * outputDeviceDescriptions; 
@property (nonatomic,readonly) float probability; 
@property (nonatomic,readonly) BOOL providesExternalVideoPlayback; 
-(id)init;
-(void)dealloc;
-(id)description;
-(float)probability;
-(BOOL)providesExternalVideoPlayback;
-(id)initWithFigRoutingSessionDestination:(const CFDictionaryRef)arg1 ;
-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1 ;
-(NSArray *)outputDeviceDescriptions;
@end


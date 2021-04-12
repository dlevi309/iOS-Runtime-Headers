/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSString, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithSensorConfigurationsByPortType:(id)arg1 ;
@end


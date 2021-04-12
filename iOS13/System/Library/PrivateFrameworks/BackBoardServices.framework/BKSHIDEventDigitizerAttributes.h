/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;

}

@property (assign,nonatomic) float maximumForce;                         //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;               //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;              //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)digitizerSurfaceWidth;
-(double)digitizerSurfaceHeight;
-(float)maximumForce;
-(void)setMaximumForce:(float)arg1 ;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
@end


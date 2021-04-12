/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSArray;

@interface VNAlignFaceRectangleRequestConfiguration : VNRequestConfiguration {

	NSArray* _inputFaceObservations;

}

@property (nonatomic,copy) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(NSArray *)inputFaceObservations;
@end


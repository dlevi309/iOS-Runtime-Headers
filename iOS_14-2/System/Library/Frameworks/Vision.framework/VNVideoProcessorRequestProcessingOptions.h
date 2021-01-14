/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying> {

	VNVideoProcessorCadence* _cadence;

}

@property (copy) VNVideoProcessorCadence * cadence;              //@synthesize cadence=_cadence - In the implementation block
-(id)_createVCPVideoProcessorRequestConfiguration;
-(VNVideoProcessorCadence *)cadence;
-(unsigned long long)hash;
-(void)setCadence:(VNVideoProcessorCadence *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


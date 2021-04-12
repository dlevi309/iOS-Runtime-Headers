/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMPoseInternal : NSObject <NSCopying> {

	CMAttitude* fAttitude;
	SCD_Struct_CM9 fTranslation;
	double fConsumedAuxTimestamp;
	double fReceivedAuxTimestamp;
	double fMachAbsTimestamp;

}
-(BOOL)isEqualToPoseInternal:(id)arg1 ;
-(id)initWithPose:(SCD_Struct_CM65)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


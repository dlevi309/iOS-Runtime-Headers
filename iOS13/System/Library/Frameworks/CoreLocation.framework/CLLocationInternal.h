/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo, _CLLocationGroundAltitude;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL3 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	_CLLocationGroundAltitude* fGroundAltitude;
	double fTrustedTimestamp;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 clientLocationPrivate:(SCD_Struct_CL25)arg2 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
@end


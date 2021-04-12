/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo, _CLLocationGroundAltitude, NSData, _CLLocationFusionInfo;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL3 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	_CLLocationGroundAltitude* fGroundAltitude;
	double fTrustedTimestamp;
	NSData* fCoarseMetaData;
	_CLLocationFusionInfo* fFusionInfo;
	double fRawHorizontalAccuracy;
	double fRawCourseAccuracy;

}
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 coarseMetaData:(id)arg2 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 clientLocationPrivate:(SCD_Struct_CL29)arg2 coarseMetaData:(id)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 coarseMetaData:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 ;
-(void)dealloc;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 clientLocationPrivate:(SCD_Struct_CL29)arg2 ;
@end


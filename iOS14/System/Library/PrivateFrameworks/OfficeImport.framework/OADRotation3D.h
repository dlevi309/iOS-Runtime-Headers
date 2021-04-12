/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRotation3D : NSObject <NSCopying> {

	float mLatitude;
	float mLongitude;
	float mRevolution;

}
-(float)latitude;
-(float)longitude;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(float)revolution;
-(id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3 ;
@end


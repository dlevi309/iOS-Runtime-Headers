/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRotation3D : NSObject <NSCopying> {

	float mLatitude;
	float mLongitude;
	float mRevolution;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)latitude;
-(float)longitude;
-(float)revolution;
-(id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3 ;
@end


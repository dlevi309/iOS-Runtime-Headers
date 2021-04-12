/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {

	OADCamera* mCamera;
	OADLightRig* mLightRig;
	OADBackdrop* mBackdrop;

}
+(id)nullScene3D;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackdrop:(id)arg1 ;
-(id)backdrop;
-(void)setCamera:(id)arg1 ;
-(id)camera;
-(void)setLightRig:(id)arg1 ;
-(id)lightRig;
@end


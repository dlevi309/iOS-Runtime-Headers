/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {

	OADPoint3D* mAnchor;
	OADVector3D* mNormal;
	OADVector3D* mUp;

}
-(id)init;
-(id)normal;
-(id)description;
-(id)up;
-(unsigned long long)hash;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUp:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNormal:(id)arg1 ;
@end


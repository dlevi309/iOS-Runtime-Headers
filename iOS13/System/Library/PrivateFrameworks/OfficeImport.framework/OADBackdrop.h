/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)normal;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(void)setUp:(id)arg1 ;
-(id)up;
-(void)setNormal:(id)arg1 ;
@end


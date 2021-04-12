/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mType;
	int mDirection;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(id)rotation;
-(void)setRotation:(id)arg1 ;
@end


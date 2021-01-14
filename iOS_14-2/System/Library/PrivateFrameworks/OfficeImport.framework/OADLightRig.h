/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)direction;
-(void)setRotation:(id)arg1 ;
-(id)init;
-(void)setDirection:(int)arg1 ;
-(id)rotation;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


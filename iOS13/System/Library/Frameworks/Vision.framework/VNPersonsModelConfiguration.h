/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _maximumIdentities;
	unsigned long long _maximumFaceprintsPerIdentity;
	unsigned long long _faceprintRequestRevision;

}

@property (assign,nonatomic) unsigned long long maximumFaceprintsPerIdentity;              //@synthesize maximumFaceprintsPerIdentity=_maximumFaceprintsPerIdentity - In the implementation block
@property (assign,nonatomic) unsigned long long maximumIdentities;                         //@synthesize maximumIdentities=_maximumIdentities - In the implementation block
@property (assign,nonatomic) unsigned long long faceprintRequestRevision;                  //@synthesize faceprintRequestRevision=_faceprintRequestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)maximumAllowableFaceprintsPerIdentity;
+(unsigned long long)maximumAllowableIdentities;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)faceprintRequestRevision;
-(void)setFaceprintRequestRevision:(unsigned long long)arg1 ;
-(void)setMaximumFaceprintsPerIdentity:(unsigned long long)arg1 ;
-(void)setMaximumIdentities:(unsigned long long)arg1 ;
-(unsigned long long)maximumFaceprintsPerIdentity;
-(unsigned long long)maximumIdentities;
-(int)faceIDModelMaximumElementsPerID;
@end


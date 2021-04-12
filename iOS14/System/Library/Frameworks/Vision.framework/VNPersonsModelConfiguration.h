/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _maximumIdentities;
	unsigned long long _maximumTrainingFaceprintsPerIdentity;
	unsigned long long _faceprintRequestRevision;

}

@property (assign,nonatomic) unsigned long long maximumIdentities;                                 //@synthesize maximumIdentities=_maximumIdentities - In the implementation block
@property (assign,nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;              //@synthesize maximumTrainingFaceprintsPerIdentity=_maximumTrainingFaceprintsPerIdentity - In the implementation block
@property (assign,nonatomic) unsigned long long faceprintRequestRevision;                          //@synthesize faceprintRequestRevision=_faceprintRequestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)maximumAllowableFaceprintsPerIdentity;
+(unsigned long long)maximumAllowableIdentities;
-(unsigned long long)faceprintRequestRevision;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(int)faceIDModelMaximumElementsPerID;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFaceprintRequestRevision:(unsigned long long)arg1 ;
-(void)setMaximumTrainingFaceprintsPerIdentity:(unsigned long long)arg1 ;
-(void)setMaximumIdentities:(unsigned long long)arg1 ;
-(unsigned long long)maximumTrainingFaceprintsPerIdentity;
-(unsigned long long)maximumIdentities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


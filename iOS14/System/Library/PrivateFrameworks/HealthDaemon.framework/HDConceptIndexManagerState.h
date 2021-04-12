/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKQueryAnchor, NSDictionary;

@interface HDConceptIndexManagerState : NSObject <NSSecureCoding, NSCopying> {

	long long _generation;
	HKQueryAnchor* _anchor;
	NSDictionary* _deletionAnchors;

}

@property (nonatomic,readonly) long long generation;                             //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) HKQueryAnchor * anchor;                      //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deletionAnchors;              //@synthesize deletionAnchors=_deletionAnchors - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateWithGeneration:(long long)arg1 ;
-(long long)generation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKQueryAnchor *)anchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithGeneration:(long long)arg1 anchor:(id)arg2 deletionAnchors:(id)arg3 ;
-(id)copyWithAnchor:(id)arg1 ;
-(id)copyWithDeletionAnchor:(id)arg1 forSampleType:(id)arg2 ;
-(NSDictionary *)deletionAnchors;
@end


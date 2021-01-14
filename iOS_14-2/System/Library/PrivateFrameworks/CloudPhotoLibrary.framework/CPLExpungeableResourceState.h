/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _resourceType;
	unsigned long long _expungedState;
	NSDate* _expungedDate;

}

@property (assign,nonatomic) unsigned long long resourceType;               //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long expungedState;              //@synthesize expungedState=_expungedState - In the implementation block
@property (nonatomic,copy) NSDate * expungedDate;                           //@synthesize expungedDate=_expungedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1 ;
-(void)setResourceType:(unsigned long long)arg1 ;
-(unsigned long long)resourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)expungedState;
-(NSDate *)expungedDate;
-(void)setExpungedDate:(NSDate *)arg1 ;
-(void)setExpungedState:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


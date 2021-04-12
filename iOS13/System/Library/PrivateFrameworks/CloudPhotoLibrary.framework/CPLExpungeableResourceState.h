/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(void)setExpungedDate:(NSDate *)arg1 ;
-(void)setExpungedState:(unsigned long long)arg1 ;
-(unsigned long long)expungedState;
-(NSDate *)expungedDate;
@end


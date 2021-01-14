/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTAddressSubPremise : NSObject <NSSecureCoding, NSCopying> {

	long long _subPremiseType;
	NSString* _subPremise;

}

@property (nonatomic,readonly) long long subPremiseType;                //@synthesize subPremiseType=_subPremiseType - In the implementation block
@property (nonatomic,copy,readonly) NSString * subPremise;              //@synthesize subPremise=_subPremise - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForSubPremiseType:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)subPremiseType;
-(id)initWithSubPremise:(id)arg1 subPremiseType:(long long)arg2 ;
-(NSString *)subPremise;
-(BOOL)isEqualToAddressSubPremise:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


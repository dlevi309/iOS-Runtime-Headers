/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject <NSSecureCoding> {

	HKObjectType* _objectType;
	long long _accessType;

}

@property (nonatomic,readonly) HKObjectType * objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) long long accessType;                   //@synthesize accessType=_accessType - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKObjectType *)objectType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)accessType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithObjectType:(id)arg1 accessType:(long long)arg2 ;
@end


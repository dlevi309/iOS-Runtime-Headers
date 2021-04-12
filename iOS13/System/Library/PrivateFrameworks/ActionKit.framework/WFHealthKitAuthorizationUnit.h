/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKObjectType *)objectType;
-(long long)accessType;
-(id)initWithObjectType:(id)arg1 accessType:(long long)arg2 ;
@end


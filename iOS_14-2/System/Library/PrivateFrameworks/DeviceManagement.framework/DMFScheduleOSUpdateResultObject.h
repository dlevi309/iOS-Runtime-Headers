/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString, NSError;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject {

	unsigned long long _action;
	NSString* _productKey;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * productKey;              //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(NSError *)error;
-(id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productKey;
@end


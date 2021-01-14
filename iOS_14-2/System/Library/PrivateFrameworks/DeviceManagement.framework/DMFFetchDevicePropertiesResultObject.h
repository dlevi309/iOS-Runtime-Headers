/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary, DMFDevice;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject {

	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy,readonly) NSDictionary * valuesByPropertyKey;              //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByPropertyKey;              //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
@property (nonatomic,readonly) DMFDevice * device; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(DMFDevice *)device;
-(id)description;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(id)valueForPropertyKey:(id)arg1 error:(id*)arg2 ;
@end


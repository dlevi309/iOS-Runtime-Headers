/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject {

	NSString* _bypassCode;

}

@property (nonatomic,copy,readonly) NSString * bypassCode;              //@synthesize bypassCode=_bypassCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bypassCode;
-(id)initWithBypassCode:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {

	unsigned _biometricEventType;

}

@property (nonatomic,readonly) unsigned biometricEventType;              //@synthesize biometricEventType=_biometricEventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithBiometricEventType:(unsigned)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)biometricEventType;
-(id)initWithBiometricEventType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


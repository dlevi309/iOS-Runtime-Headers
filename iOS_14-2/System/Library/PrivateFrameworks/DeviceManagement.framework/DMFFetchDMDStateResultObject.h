/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject {

	NSString* _dmdStateDescription;

}

@property (nonatomic,copy) NSString * dmdStateDescription;              //@synthesize dmdStateDescription=_dmdStateDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dmdStateDescription;
-(id)initWithStateDescription:(id)arg1 ;
-(void)setDmdStateDescription:(NSString *)arg1 ;
@end


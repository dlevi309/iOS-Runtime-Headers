/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject {

	NSArray* _payloadDescriptions;

}

@property (nonatomic,copy) NSArray * payloadDescriptions;              //@synthesize payloadDescriptions=_payloadDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)payloadDescriptions;
-(void)setPayloadDescriptions:(NSArray *)arg1 ;
@end


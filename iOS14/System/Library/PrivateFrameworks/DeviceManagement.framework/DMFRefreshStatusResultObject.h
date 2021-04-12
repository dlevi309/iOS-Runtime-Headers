/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject {

	NSNumber* _numberOfUpdates;

}

@property (nonatomic,copy) NSNumber * numberOfUpdates;              //@synthesize numberOfUpdates=_numberOfUpdates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)numberOfUpdates;
-(void)setNumberOfUpdates:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject {

	NSArray* _certificates;

}

@property (nonatomic,copy,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCertificates:(id)arg1 ;
@end


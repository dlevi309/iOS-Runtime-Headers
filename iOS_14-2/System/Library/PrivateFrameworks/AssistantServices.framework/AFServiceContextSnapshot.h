/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface AFServiceContextSnapshot : NSObject <NSSecureCoding> {

	NSDate* _deliveryDate;

}

@property (nonatomic,copy,readonly) NSDate * deliveryDate;              //@synthesize deliveryDate=_deliveryDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeliveryDate:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)deliveryDate;
@end


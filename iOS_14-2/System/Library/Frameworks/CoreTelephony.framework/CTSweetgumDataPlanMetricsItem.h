/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSweetgumDataPlanMetricsItem : NSObject <NSSecureCoding> {

	NSNumber* _capacityBytes;

}

@property (nonatomic,retain) NSNumber * capacityBytes;              //@synthesize capacityBytes=_capacityBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)capacityBytes;
-(void)setCapacityBytes:(NSNumber *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


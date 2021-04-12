/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding> {

	double _timeInterval;

}

@property (assign,nonatomic) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTimeInterval:(double)arg1 ;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end


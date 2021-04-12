/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTSubscriberAlgorithm;

@interface CTSubscriberAuthRequest : NSObject <NSSecureCoding> {

	CTSubscriberAlgorithm* _algorithm;

}

@property (nonatomic,retain) CTSubscriberAlgorithm * algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTSubscriberAlgorithm *)algorithm;
-(void)setAlgorithm:(CTSubscriberAlgorithm *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm {

	NSData* _rand;

}

@property (nonatomic,retain) NSData * rand;              //@synthesize rand=_rand - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)rand;
-(void)setRand:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


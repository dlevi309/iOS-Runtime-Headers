/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm {

	NSData* _rand;
	NSData* _autn;

}

@property (nonatomic,retain) NSData * rand;              //@synthesize rand=_rand - In the implementation block
@property (nonatomic,retain) NSData * autn;              //@synthesize autn=_autn - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)rand;
-(NSData *)autn;
-(void)setRand:(NSData *)arg1 ;
-(void)setAutn:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


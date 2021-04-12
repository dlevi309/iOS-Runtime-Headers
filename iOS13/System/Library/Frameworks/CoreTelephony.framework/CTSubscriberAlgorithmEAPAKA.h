/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)rand;
-(void)setRand:(NSData *)arg1 ;
-(NSData *)autn;
-(void)setAutn:(NSData *)arg1 ;
@end


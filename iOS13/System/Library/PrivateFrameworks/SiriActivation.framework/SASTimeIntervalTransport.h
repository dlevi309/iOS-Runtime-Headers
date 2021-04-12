/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SASTimeIntervalTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _transport;

}

@property (nonatomic,retain) NSNumber * transport;              //@synthesize transport=_transport - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(NSNumber *)transport;
-(void)setTransport:(NSNumber *)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end


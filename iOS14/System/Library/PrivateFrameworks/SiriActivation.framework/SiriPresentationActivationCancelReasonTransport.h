/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _transport;

}

@property (nonatomic,retain) NSNumber * transport;              //@synthesize transport=_transport - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)transport;
-(void)setTransport:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)cancelReason;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSiriPresentationActivationCancelReason:(unsigned long long)arg1 ;
@end


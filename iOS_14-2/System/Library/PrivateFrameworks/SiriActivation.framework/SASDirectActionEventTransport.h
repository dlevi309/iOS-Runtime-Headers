/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SASDirectActionEventTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _event;

}

@property (nonatomic,retain) NSNumber * event;              //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)event;
-(void)setEvent:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)directActionEvent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAFDirectActionEvent:(long long)arg1 ;
@end


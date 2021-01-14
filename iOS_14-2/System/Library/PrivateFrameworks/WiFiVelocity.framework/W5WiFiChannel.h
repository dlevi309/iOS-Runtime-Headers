/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding> {

	int _flags;
	long long _channel;

}

@property (nonatomic,readonly) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) int flags;                      //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(int)flags;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)channel;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


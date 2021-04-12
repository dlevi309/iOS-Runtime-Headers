/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)flags;
-(long long)channel;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(int)arg2 ;
@end


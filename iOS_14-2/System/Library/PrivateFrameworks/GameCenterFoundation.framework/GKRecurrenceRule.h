/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interval;
	long long _frequency;

}

@property (assign) unsigned long long interval;              //@synthesize interval=_interval - In the implementation block
@property (assign) long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
-(void)setInterval:(unsigned long long)arg1 ;
-(unsigned long long)interval;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


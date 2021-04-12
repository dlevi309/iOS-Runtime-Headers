/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateInterval, NSDate;

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _modeIdentifier;
	unsigned long long _lifetimeType;
	NSDateInterval* _activeDateInterval;
	NSDate* _userVisibleEndDate;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * userVisibleEndDate;                      //@synthesize userVisibleEndDate=_userVisibleEndDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * modeIdentifier;                        //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long lifetimeType;                       //@synthesize lifetimeType=_lifetimeType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * activeDateInterval;              //@synthesize activeDateInterval=_activeDateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDateInterval *)activeDateInterval;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)modeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)lifetimeType;
-(NSDate *)userVisibleEndDate;
-(id)initWithClientIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetimeType:(unsigned long long)arg3 activeDateInterval:(id)arg4 userVisibleEndDate:(id)arg5 ;
@end


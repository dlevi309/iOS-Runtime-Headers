/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding> {

	DNDState* _previousState;
	DNDState* _state;
	unsigned long long _reason;

}

@property (nonatomic,copy,readonly) DNDState * previousState;              //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,copy,readonly) DNDState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                  //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(DNDState *)previousState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(DNDState *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3 ;
@end


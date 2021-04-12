/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(DNDState *)state;
-(DNDState *)previousState;
-(id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3 ;
@end


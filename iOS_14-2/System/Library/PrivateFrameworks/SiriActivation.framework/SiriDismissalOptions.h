/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _animated;
	BOOL _shouldTurnScreenOff;
	unsigned long long _deactivationOptions;
	long long _reason;
	unsigned long long _dismissalReason;

}

@property (nonatomic,readonly) unsigned long long deactivationOptions;              //@synthesize deactivationOptions=_deactivationOptions - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                       //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) long long reason;                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long dismissalReason;                  //@synthesize dismissalReason=_dismissalReason - In the implementation block
@property (nonatomic,readonly) BOOL shouldTurnScreenOff;                            //@synthesize shouldTurnScreenOff=_shouldTurnScreenOff - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)animated;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)dismissalReason;
-(id)description;
-(long long)reason;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 requestCancellationReason:(long long)arg3 dismissalReason:(unsigned long long)arg4 shouldTurnScreenOff:(BOOL)arg5 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 dismissalReason:(unsigned long long)arg3 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 requestCancellationReason:(long long)arg3 ;
-(unsigned long long)deactivationOptions;
-(BOOL)shouldTurnScreenOff;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end


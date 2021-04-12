/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _animated;
	unsigned long long _deactivationOptions;
	long long _reason;
	unsigned long long _dismissalReason;

}

@property (nonatomic,readonly) unsigned long long deactivationOptions;              //@synthesize deactivationOptions=_deactivationOptions - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                       //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) long long reason;                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long dismissalReason;                  //@synthesize dismissalReason=_dismissalReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(BOOL)animated;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 dismissalReason:(unsigned long long)arg3 ;
-(unsigned long long)dismissalReason;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 requestCancellationReason:(long long)arg3 dismissalReason:(unsigned long long)arg4 ;
-(id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(BOOL)arg2 requestCancellationReason:(long long)arg3 ;
-(unsigned long long)deactivationOptions;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/BKSAssertion.h>

@class RBSAssertion;

@interface BKSProcessAssertion : BKSAssertion {

	unsigned _reason;
	unsigned _flags;
	RBSAssertion* _mediaPlaybackHackAssertion;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) unsigned reason;              //@synthesize reason=_reason - In the implementation block
+(id)NameForReason:(unsigned)arg1 ;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned)arg3 reason:(unsigned)arg4 name:(id)arg5 withHandler:(/*^block*/id)arg6 acquire:(BOOL)arg7 ;
-(unsigned)flags;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_legacyFlagsForFlags:(unsigned)arg1 ;
-(BOOL)acquire;
-(unsigned)reason;
-(void)setFlags:(unsigned)arg1 ;
-(void)invalidate;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_legacyReasonForReason:(unsigned)arg1 ;
-(void)dealloc;
@end


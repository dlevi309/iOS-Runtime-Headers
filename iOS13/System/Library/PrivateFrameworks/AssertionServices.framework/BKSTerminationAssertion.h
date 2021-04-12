/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/BKSAssertion.h>

@class NSString, BKSTerminationContext;

@interface BKSTerminationAssertion : BKSAssertion {

	NSString* _bundleIdentifier;
	unsigned long long _efficacy;
	BKSTerminationContext* _context;

}

@property (nonatomic,readonly) unsigned long long efficacy;                         //@synthesize efficacy=_efficacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetBundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) BKSTerminationContext * context;                //@synthesize context=_context - In the implementation block
-(void)invalidate;
-(BOOL)acquire;
-(BKSTerminationContext *)context;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(unsigned long long)efficacy;
-(NSString *)targetBundleIdentifier;
@end


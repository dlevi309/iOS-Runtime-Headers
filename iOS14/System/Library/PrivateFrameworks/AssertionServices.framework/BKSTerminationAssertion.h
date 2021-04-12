/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)targetBundleIdentifier;
-(unsigned long long)efficacy;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(BKSTerminationContext *)context;
-(unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1 ;
-(BOOL)acquire;
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end


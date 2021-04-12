/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFAssertion.h>

@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion {

	HMHomeManager* _manager;

}

@property (__weak,readonly) HMHomeManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)initWithName:(id)arg1 ;
-(HMHomeManager *)manager;
-(void)invalidate;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
@end


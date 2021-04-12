/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFAssertion.h>

@class HMFWiFiManager;

@interface __HMFWiFiAssertion : HMFAssertion {

	HMFWiFiManager* _manager;
	unsigned long long _options;

}

@property (readonly) HMFWiFiManager * manager;                //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(BOOL)acquire:(id*)arg1 ;
-(unsigned long long)options;
-(id)initWithName:(id)arg1 ;
-(HMFWiFiManager *)manager;
-(void)invalidate;
-(id)initWithOptions:(unsigned long long)arg1 manager:(id)arg2 reason:(id)arg3 ;
@end


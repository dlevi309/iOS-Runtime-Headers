/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, _HMFNetManagerWoWAssertion;

@interface HMFNetManager : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	_HMFNetManagerWoWAssertion* _wowAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak) _HMFNetManagerWoWAssertion * wowAssertion;                         //@synthesize wowAssertion=_wowAssertion - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)deregisterWoWAssertionForObject:(id)arg1 ;
-(_HMFNetManagerWoWAssertion *)wowAssertion;
-(void)setWowAssertion:(_HMFNetManagerWoWAssertion *)arg1 ;
-(void)deregisterObject:(id)arg1 ;
-(void)registerWoWAssertionForObject:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _ready;
	CLLocationManager* _manager;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (readonly) CLLocationManager * manager;                           //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMFLocationAuthorization *)authorization;
-(id)initWithTimeout:(double)arg1 ;
-(void)main;
-(BOOL)isReady;
-(CLLocationManager *)manager;
-(void)dealloc;
-(id)initWithAuthorization:(id)arg1 ;
@end


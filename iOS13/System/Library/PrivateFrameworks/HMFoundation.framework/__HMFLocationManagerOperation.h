/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFLocking;
@class CLLocationManager, HMFLocationAuthorization, NSString;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {

	id<HMFLocking> _lock;
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
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(void)dealloc;
-(void)main;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isReady;
-(CLLocationManager *)manager;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithAuthorization:(id)arg1 ;
-(HMFLocationAuthorization *)authorization;
@end


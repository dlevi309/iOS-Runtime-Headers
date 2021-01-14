/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface ICKeyedSharedInstanceManager : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _instantiationHandler;
	NSMutableDictionary* _stronglyHeldSharedInstances;
	NSMapTable* _weaklyHeldSharedInstances;
	NSMutableDictionary* _usageCounts;

}
-(id)sharedInstanceForKey:(id)arg1 ;
-(id)initWithInstantiationHandler:(/*^block*/id)arg1 ;
-(void)decrementUsageCountForKey:(id)arg1 ;
-(void)incrementUsageCountForKey:(id)arg1 ;
@end


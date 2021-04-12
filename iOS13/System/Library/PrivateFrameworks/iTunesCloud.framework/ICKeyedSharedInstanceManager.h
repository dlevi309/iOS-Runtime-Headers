/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithInstantiationHandler:(/*^block*/id)arg1 ;
-(id)sharedInstanceForKey:(id)arg1 ;
-(void)incrementUsageCountForKey:(id)arg1 ;
-(void)decrementUsageCountForKey:(id)arg1 ;
@end


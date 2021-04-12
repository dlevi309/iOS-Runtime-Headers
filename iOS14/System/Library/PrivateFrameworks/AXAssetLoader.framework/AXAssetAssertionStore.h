/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/


#import <AXAssetLoader/AXAssetLoader-Structs.h>
@class NSUserDefaults;

@interface AXAssetAssertionStore : NSObject {

	os_unfair_lock_s _lock;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)store;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)_init;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)_mutateAssertionsForAssetType:(id)arg1 assertions:(id)arg2 mutationBlock:(/*^block*/id)arg3 ;
-(void)_mutateAssetAssertions:(/*^block*/id)arg1 ;
-(void)requestAssertion:(id)arg1 ;
-(void)discardAssertion:(id)arg1 ;
-(void)discardAllAssertionsOfType:(id)arg1 heldByClient:(id)arg2 ;
-(void)discardAllAssertionsOfType:(id)arg1 ;
-(id)heldAssertionsForAssetType:(id)arg1 ;
@end


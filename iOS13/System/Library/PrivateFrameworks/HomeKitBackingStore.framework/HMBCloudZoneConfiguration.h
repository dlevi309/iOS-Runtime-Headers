/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject {

	BOOL _shouldRebuildOnManateeKeyLoss;
	BOOL _shouldSuppressDelegateCallbacksOnInitialFetch;

}

@property (assign) BOOL shouldRebuildOnManateeKeyLoss;                              //@synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss - In the implementation block
@property (assign) BOOL shouldSuppressDelegateCallbacksOnInitialFetch;              //@synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(BOOL)shouldRebuildOnManateeKeyLoss;
-(BOOL)shouldSuppressDelegateCallbacksOnInitialFetch;
-(void)setShouldRebuildOnManateeKeyLoss:(BOOL)arg1 ;
-(void)setShouldSuppressDelegateCallbacksOnInitialFetch:(BOOL)arg1 ;
@end


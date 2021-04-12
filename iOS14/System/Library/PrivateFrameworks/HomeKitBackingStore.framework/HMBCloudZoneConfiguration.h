/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldRebuildOnManateeKeyLoss;
-(BOOL)shouldSuppressDelegateCallbacksOnInitialFetch;
-(void)setShouldRebuildOnManateeKeyLoss:(BOOL)arg1 ;
-(void)setShouldSuppressDelegateCallbacksOnInitialFetch:(BOOL)arg1 ;
@end


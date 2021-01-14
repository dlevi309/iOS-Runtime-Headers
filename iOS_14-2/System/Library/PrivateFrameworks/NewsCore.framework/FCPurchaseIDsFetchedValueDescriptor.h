/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCBundlePurchaseIDsFetchedValueManager;

@interface FCPurchaseIDsFetchedValueDescriptor : FCFetchedValueDescriptor {

	FCBundlePurchaseIDsFetchedValueManager* _bundlePurchaseIDsManager;

}

@property (nonatomic,readonly) FCBundlePurchaseIDsFetchedValueManager * bundlePurchaseIDsManager;              //@synthesize bundlePurchaseIDsManager=_bundlePurchaseIDsManager - In the implementation block
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)fastCachedValue;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)inputManagers;
-(FCBundlePurchaseIDsFetchedValueManager *)bundlePurchaseIDsManager;
-(id)initWithBundlePurchaseIDsManager:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_computedValue;
@end


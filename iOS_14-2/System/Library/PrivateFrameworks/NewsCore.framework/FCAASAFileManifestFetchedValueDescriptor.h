/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCAASAFileManifestFetchedValueDescriptor : FCFetchedValueDescriptor {

	FCFetchedValueManager* _purchaseIDsManager;
	FCFetchedValueManager* _heldLinksResourceManager;

}

@property (nonatomic,readonly) FCFetchedValueManager * purchaseIDsManager;                    //@synthesize purchaseIDsManager=_purchaseIDsManager - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * heldLinksResourceManager;              //@synthesize heldLinksResourceManager=_heldLinksResourceManager - In the implementation block
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)fastCachedValue;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)initWithPurchaseIDsManager:(id)arg1 heldLinksResourceManager:(id)arg2 ;
-(id)inputManagers;
-(FCFetchedValueManager *)heldLinksResourceManager;
-(FCFetchedValueManager *)purchaseIDsManager;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_computedValue;
@end


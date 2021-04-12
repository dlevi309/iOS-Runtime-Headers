/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCHeldVanityURLMappingFetchedValueDescriptor : FCFetchedValueDescriptor {

	id<FCContentContext> _contentContext;
	FCFetchedValueManager* _resourceConfigurationManager;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                               //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * resourceConfigurationManager;              //@synthesize resourceConfigurationManager=_resourceConfigurationManager - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)inputManagers;
-(id)fastCachedValue;
-(FCFetchedValueManager *)resourceConfigurationManager;
-(void)_processFetchOperationResult:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithContentContext:(id)arg1 resourceConfigurationManager:(id)arg2 ;
@end


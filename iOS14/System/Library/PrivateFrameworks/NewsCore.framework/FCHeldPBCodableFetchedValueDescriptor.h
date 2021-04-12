/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor {

	Class _codableClass;
	id<FCContentContext> _contentContext;
	FCFetchedValueManager* _resourceConfigurationManager;

}

@property (nonatomic,readonly) Class codableClass;                                                //@synthesize codableClass=_codableClass - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                               //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * resourceConfigurationManager;              //@synthesize resourceConfigurationManager=_resourceConfigurationManager - In the implementation block
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(FCFetchedValueManager *)resourceConfigurationManager;
-(id<FCContentContext>)contentContext;
-(id)fastCachedValue;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)initWithCodableClass:(Class)arg1 contentContext:(id)arg2 resourceConfigurationManager:(id)arg3 ;
-(void)_processFetchOperationResult:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)inputManagers;
-(Class)codableClass;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


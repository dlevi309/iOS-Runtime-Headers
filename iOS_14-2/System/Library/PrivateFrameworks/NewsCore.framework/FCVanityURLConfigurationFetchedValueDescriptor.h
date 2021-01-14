/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor {

	FCFetchedValueManager* _configurationManager;

}

@property (nonatomic,readonly) FCFetchedValueManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
-(id)initWithConfigurationManager:(id)arg1 ;
-(FCFetchedValueManager *)configurationManager;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)fastCachedValue;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)_vanityURLConfiguration;
-(id)inputManagers;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


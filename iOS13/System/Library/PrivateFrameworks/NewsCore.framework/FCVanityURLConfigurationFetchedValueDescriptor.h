/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor {

	FCFetchedValueManager* _configurationManager;

}

@property (nonatomic,readonly) FCFetchedValueManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCFetchedValueManager *)configurationManager;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)inputManagers;
-(id)fastCachedValue;
-(id)_vanityURLConfiguration;
@end


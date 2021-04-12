/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCCoreConfigurationManager;
@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor {

	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
-(id)initWithConfigurationManager:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)fastCachedValue;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)inputManagers;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


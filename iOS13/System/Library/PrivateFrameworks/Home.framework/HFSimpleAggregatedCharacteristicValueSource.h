/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFAggregatedCharacteristicValueSource.h>

@protocol HFCharacteristicValueSource;
@class HFServiceDescriptor, NSSet, NSDictionary, NSString;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource> {

	NSSet* _allServices;
	NSSet* _characteristics;
	HFServiceDescriptor* _primaryServiceDescriptor;
	id<HFCharacteristicValueSource> _valueSource;
	NSDictionary* _characteristicsByType;

}

@property (nonatomic,copy,readonly) NSDictionary * characteristicsByType;                   //@synthesize characteristicsByType=_characteristicsByType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allServices;                                    //@synthesize allServices=_allServices - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                 //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,copy,readonly) NSSet * characteristics;                                //@synthesize characteristics=_characteristics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor;              //@synthesize primaryServiceDescriptor=_primaryServiceDescriptor - In the implementation block
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allServices;
-(NSSet *)characteristics;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3 ;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(NSDictionary *)characteristicsByType;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg1 ;
-(id)writeValuesForCharacteristicTypes:(id)arg1 ;
-(id)metadataForCharacteristicType:(id)arg1 ;
-(id)readValuesForServiceStateRecipe:(id)arg1 ;
-(id)writeValuesForCharacteristicRecipes:(id)arg1 ;
-(id)allCharacteristicsForCharacteristicType:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3 ;
@end


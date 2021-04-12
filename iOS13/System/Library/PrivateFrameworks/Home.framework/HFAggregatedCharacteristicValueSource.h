/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HFServiceDescriptor;


@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable,NSCopying>
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@required
-(id)allServices;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(id)readValuesForCharacteristicTypes:(id)arg1;
-(id)writeValuesForCharacteristicTypes:(id)arg1;
-(id)metadataForCharacteristicType:(id)arg1;
-(id)readValuesForServiceStateRecipe:(id)arg1;
-(id)writeValuesForCharacteristicRecipes:(id)arg1;
-(id)allCharacteristicsForCharacteristicType:(id)arg1;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject {

	NSDictionary* _synonymLookupTable;
	NSDictionary* _hkUnitNameLookupTable;

}

@property (nonatomic,copy) NSDictionary * synonymLookupTable;                 //@synthesize synonymLookupTable=_synonymLookupTable - In the implementation block
@property (nonatomic,copy) NSDictionary * hkUnitNameLookupTable;              //@synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable - In the implementation block
+(id)sharedConverter;
-(id)init;
-(id)synonymForUCUMUnitString:(id)arg1 ;
-(void)setSynonymLookupTable:(NSDictionary *)arg1 ;
-(void)setHkUnitNameLookupTable:(NSDictionary *)arg1 ;
-(NSDictionary *)synonymLookupTable;
-(NSDictionary *)hkUnitNameLookupTable;
-(id)hkUnitNameForUCUMUnitCode:(id)arg1 ;
@end


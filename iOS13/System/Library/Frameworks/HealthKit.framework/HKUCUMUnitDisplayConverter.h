/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)hkUnitNameForUCUMUnitCode:(id)arg1 ;
-(id)synonymForUCUMUnitString:(id)arg1 ;
-(void)setSynonymLookupTable:(NSDictionary *)arg1 ;
-(void)setHkUnitNameLookupTable:(NSDictionary *)arg1 ;
-(NSDictionary *)synonymLookupTable;
-(NSDictionary *)hkUnitNameLookupTable;
@end


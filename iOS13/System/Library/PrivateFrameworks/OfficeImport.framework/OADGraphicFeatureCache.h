/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {

	NSMutableArray* mFeatureUsageArray;
	OITSUNoCopyDictionary* mFeatureMap;

}
-(id)init;
-(void)dealloc;
-(id)countedFeatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cacheFeature:(id)arg1 ;
-(id)featuresSortedByUsageCount;
@end


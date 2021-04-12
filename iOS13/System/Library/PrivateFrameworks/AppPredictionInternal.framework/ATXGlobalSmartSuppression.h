/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASCFBurstTrie;

@interface ATXGlobalSmartSuppression : NSObject {

	_PASCFBurstTrie* _associationScoresTrie;

}
+(int)decodeGeoAssociationScoreAtGeoHashResolution:(unsigned long long)arg1 forEncodedScore:(int)arg2 ;
+(int)decodeAssociationScoreForContext:(unsigned long long)arg1 forEncodedScore:(int)arg2 ;
-(id)init;
-(id)fetchContextualAssociationScoresForBundleId:(id)arg1 ;
@end


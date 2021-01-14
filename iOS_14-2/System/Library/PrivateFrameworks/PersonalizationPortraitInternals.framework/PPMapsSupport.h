/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPMapsSupport : NSObject
+(void)importMapsDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
+(void)importMapsDataWithCollectionQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
+(void)importMapsDataWithFavoriteQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
+(BOOL)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(BOOL)arg4 localNamedEntityStore:(id)arg5 localLocationStore:(id)arg6 error:(id*)arg7 ;
@end


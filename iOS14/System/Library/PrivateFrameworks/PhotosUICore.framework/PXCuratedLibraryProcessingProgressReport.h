/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibraryProcessingProgressReport : NSObject
+(void)computeBriefDescriptionWithResultBlock:(/*^block*/id)arg1 ;
+(void)computeFullDescriptionWithResultBlock:(/*^block*/id)arg1 ;
+(id)colorForDefault;
+(id)colorForNotEnriched;
+(id)colorForPartial;
+(id)colorForSceneComplete;
+(id)colorForComplete;
+(void)computeProgressWithResultBlock:(/*^block*/id)arg1 ;
+(void)getLibraryProcessingProgressWithResult:(/*^block*/id)arg1 ;
+(void)getHighlightEnrichmentProgressWithResult:(/*^block*/id)arg1 ;
+(id)highlightEnrichmentProgressImageWithProgressReport:(SCD_Struct_PX104)arg1 ;
@end


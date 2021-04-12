/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXPhotosSectionHeaderMetrics : NSObject {

	double _cachedHeights[4];

}
+(id)sharedMetrics;
-(id)init;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(double)sectionHeaderHeightForStyle:(long long)arg1 hasTitle:(BOOL)arg2 hasDates:(BOOL)arg3 hasLocation:(BOOL)arg4 ;
-(double)accessibilitySectionHeaderHeightForStyle:(long long)arg1 width:(double)arg2 actionButton:(BOOL)arg3 disclosure:(BOOL)arg4 title:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 locations:(id)arg8 actionButtonSpec:(id)arg9 ;
-(void)_invalidateCache;
@end


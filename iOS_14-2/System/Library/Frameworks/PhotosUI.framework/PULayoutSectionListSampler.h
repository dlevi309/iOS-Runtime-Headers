/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionListSampler : PULayoutSectionSampler {

	long long _numberOfVisibleItems;
	long long _numberOfRealItems;
	long long* _visibleItemIndexes;
	long long _lastSeenSampledIndex;
	long long _lastSeenUnsampledIndex;
	long long _lastSeenTopUnsampledIndex;

}
-(long long)unsampledIndexForIndex:(long long)arg1 ;
-(long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(BOOL*)arg2 ;
-(void)dumpInternalMemory;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2 ;
-(long long*)visibleItemIndexes;
-(void)dealloc;
@end


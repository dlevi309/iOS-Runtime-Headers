/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectioning.h>

@class NSArray;

@interface PULayoutSampledSectioning : PULayoutSectioning {

	BOOL _sectioningIsValid;
	BOOL _samplingIsValid;
	long long _numberOfRealSections;
	long long _numberOfVisualSections;
	NSArray* _realSectionIndexesForVisualSection;
	long long* _visualSectionForRealSection;
	long long* _numberOfItemsForRealSection;
	long long* _numberOfRealItemsForVisualSection;
	long long* _startIndexInVisualSectionForRealSection;
	id* _sectionSamplers;
	long long* _maximumNumberOfVisibleItemsForVisualSection;
	BOOL _hasSomeSampling;
	long long _lastHitRealSectionIndex;
	long long _lastHitVisualSectionIndex;
	long long _lastHitRangeIndex;
	BOOL _supportsSamplingAndSectionGrouping;

}

@property (assign,nonatomic) BOOL supportsSamplingAndSectionGrouping;              //@synthesize supportsSamplingAndSectionGrouping=_supportsSamplingAndSectionGrouping - In the implementation block
-(id)init;
-(void)invalidateSampling;
-(BOOL)hasSomeSampling;
-(void)invalidateSections;
-(long long)numberOfRealItemsInVisualSection:(long long)arg1 ;
-(PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(PUSimpleIndexPath)arg1 ;
-(PUSimpleIndexPath)visualIndexPathForRealIndexPath:(PUSimpleIndexPath)arg1 isMainItem:(BOOL*)arg2 ;
-(void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1 ;
-(long long)__debugUnsampledIndexForRealIndexPath:(PUSimpleIndexPath)arg1 ;
-(void)setSupportsSamplingAndSectionGrouping:(BOOL)arg1 ;
-(void)_discardSamplingCache;
-(void)_discardSectioningCache;
-(void)_cacheSectioningIfNeeded;
-(id)_sectionSamplerForVisualSection:(long long)arg1 ;
-(long long)_visualItemIndexForUnsampledItemIndex:(long long)arg1 visualSection:(long long)arg2 isMainItem:(BOOL*)arg3 ;
-(long long)_unsampledItemIndexForVisualItemIndex:(long long)arg1 visualSection:(long long)arg2 ;
-(BOOL)supportsSamplingAndSectionGrouping;
-(PUSimpleIndexPath)_mainRealItemIndexPathForVisualSection:(long long)arg1 andUnsampledItemIndex:(long long)arg2 ;
-(long long)visualSectionForRealSection:(long long)arg1 ;
-(long long)mainRealSectionForVisualSection:(long long)arg1 ;
-(void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)numberOfVisualItemsInVisualSection:(long long)arg1 ;
-(void)dealloc;
@end


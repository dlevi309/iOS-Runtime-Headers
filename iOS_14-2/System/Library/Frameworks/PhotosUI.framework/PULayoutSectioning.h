/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PULayoutSectioningDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@interface PULayoutSectioning : NSObject {

	BOOL _invalidatingSampling;
	BOOL _invalidatingSections;
	PULayoutSectioning* _baseSectioning;
	id<PULayoutSectioningDelegate> _delegate;

}

@property (assign,nonatomic) id<PULayoutSectioningDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PULayoutSectioning * baseSectioning;                  //@synthesize baseSectioning=_baseSectioning - In the implementation block
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id<PULayoutSectioningDelegate>)delegate;
-(void)setDelegate:(id<PULayoutSectioningDelegate>)arg1 ;
-(id)description;
-(id)sectioningHash;
-(void)_baseSectioningDidInvalidateSampling:(id)arg1 ;
-(void)invalidateSampling;
-(BOOL)hasSomeSampling;
-(void)_baseSectioningDidInvalidateSections:(id)arg1 ;
-(void)invalidateSections;
-(void)setBaseSectioning:(PULayoutSectioning *)arg1 ;
-(long long)numberOfRealItemsInVisualSection:(long long)arg1 ;
-(PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(PUSimpleIndexPath)arg1 ;
-(PUSimpleIndexPath)visualIndexPathForRealIndexPath:(PUSimpleIndexPath)arg1 isMainItem:(BOOL*)arg2 ;
-(void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1 ;
-(long long)__debugUnsampledIndexForRealIndexPath:(PUSimpleIndexPath)arg1 ;
-(id)sectioningDescription;
-(PULayoutSectioning *)baseSectioning;
-(id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)arg1 hasIncorrectSampling:(BOOL*)arg2 hasInvisibleItemsInBaseSectioning:(BOOL*)arg3 ;
-(id)sectioningHashHasIncorrectSampling:(BOOL*)arg1 hasInvisibleItemsInBaseSectioning:(BOOL*)arg2 ;
-(long long)visualSectionForRealSection:(long long)arg1 ;
-(long long)mainRealSectionForVisualSection:(long long)arg1 ;
-(void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)numberOfVisualItemsInVisualSection:(long long)arg1 ;
-(void)dealloc;
@end


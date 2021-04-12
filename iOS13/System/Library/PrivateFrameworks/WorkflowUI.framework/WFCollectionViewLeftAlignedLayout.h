/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout {

	NSMutableDictionary* _frameCache;
	NSMutableDictionary* _sectionInsetCache;

}

@property (nonatomic,retain) NSMutableDictionary * frameCache;                     //@synthesize frameCache=_frameCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionInsetCache;              //@synthesize sectionInsetCache=_sectionInsetCache - In the implementation block
-(id)init;
-(void)invalidateLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(NSMutableDictionary *)frameCache;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1 ;
-(id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(UIEdgeInsets)arg2 ;
-(void)setFrameCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionInsetCache;
-(void)setSectionInsetCache:(NSMutableDictionary *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout {

	NSMutableDictionary* _frameCache;
	NSMutableDictionary* _sectionInsetCache;

}

@property (nonatomic,retain) NSMutableDictionary * frameCache;                     //@synthesize frameCache=_frameCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionInsetCache;              //@synthesize sectionInsetCache=_sectionInsetCache - In the implementation block
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)init;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(NSMutableDictionary *)frameCache;
-(UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1 ;
-(id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(UIEdgeInsets)arg2 ;
-(void)setFrameCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionInsetCache;
-(void)setSectionInsetCache:(NSMutableDictionary *)arg1 ;
@end


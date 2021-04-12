/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class REUpNextCollectionViewFlowLayoutAttributes, NSDictionary, NSIndexPath;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {

	REUpNextCollectionViewFlowLayoutAttributes* _preferedCellAttributes;
	NSDictionary* _allAttributes;
	NSIndexPath* _preferedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * preferedIndexPath;              //@synthesize preferedIndexPath=_preferedIndexPath - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSIndexPath *)preferedIndexPath;
-(void)setPreferedIndexPath:(NSIndexPath *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(NSIndexPath *)preferedIndexPath;
-(void)setPreferedIndexPath:(NSIndexPath *)arg1 ;
@end


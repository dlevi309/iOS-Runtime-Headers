/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class PKDiscoveryShelfView;

@interface PKDiscoveryArticleLayoutCell : UICollectionViewCell {

	PKDiscoveryShelfView* _shelfView;

}

@property (nonatomic,retain) PKDiscoveryShelfView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setShelfView:(PKDiscoveryShelfView *)arg1 ;
-(PKDiscoveryShelfView *)shelfView;
@end


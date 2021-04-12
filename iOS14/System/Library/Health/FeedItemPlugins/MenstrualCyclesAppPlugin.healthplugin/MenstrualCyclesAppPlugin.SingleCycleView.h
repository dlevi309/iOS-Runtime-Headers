/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/HKMCViewModelProviderObserver.h>

@class UIColor;

@interface MenstrualCyclesAppPlugin.SingleCycleView : UIView <UICollectionViewDelegate, HKMCViewModelProviderObserver> {

	 filter;
	 collectionView;
	 overlayGradient;
	 cycleDataSource;

}

@property (retain,nonatomic) UIColor * backgroundColor; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewModelProviderDidUpdate:(id)arg1 ;
@end


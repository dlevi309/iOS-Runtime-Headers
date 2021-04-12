/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVShelfViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/VUISeasonPickerButtonDelegate.h>

@class NSString;

@interface VUIEpisodeShelfViewController : _TVShelfViewController <__TVShelfViewControllerDelegate, VUISeasonPickerButtonDelegate> {

	BOOL _isInitialLoad;

}

@property (assign,nonatomic) BOOL isInitialLoad;                    //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialLoad;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(id)indexTitlesForCollectionView:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)seasonPickerButtonTapped:(id)arg1 ;
-(void)seasonPickerButtonMenuSelected:(id)arg1 selectedTitle:(id)arg2 selectedIndex:(unsigned long long)arg3 ;
-(void)_updateEpisodeHeaderWithLeftMostItem;
-(id)_episodeHeaderView;
-(unsigned long long)selectedIndexTitleForItemIndexPath:(id)arg1 ;
@end


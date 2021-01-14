/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKSpendingSummaryView, UIImage, NSString;

@interface PKSpendingSummaryPresenter : NSObject <PKDashboardItemPresenter> {

	PKSpendingSummaryView* _sampleView;
	UIImage* _upImage;
	UIImage* _downImage;
	BOOL _needsSizing;
	CGSize _summarySize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configureView:(id)arg1 item:(id)arg2 presentationStyle:(unsigned long long)arg3 ;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)swapSummaryInCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
@end


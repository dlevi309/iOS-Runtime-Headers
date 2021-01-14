/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKDashboardBalanceView, UICollectionView, NSString;

@interface PKDashboardBalancePresenter : NSObject <PKDashboardItemPresenter> {

	PKDashboardBalanceView* _sampleBalanceView;
	UICollectionView* _collectionView;
	long long _cellStyle;

}

@property (assign,nonatomic) long long cellStyle;                   //@synthesize cellStyle=_cellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCellStyle:(long long)arg1 ;
-(id)init;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)_shouldInset;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_updateMessageView:(id)arg1 withItem:(id)arg2 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)_identifierForItem:(id)arg1 ;
-(long long)cellStyle;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>

@class MiroColorSelectionController, UICollectionView, UILabel, NSString;

@interface MiroEditorClipDebugView : UIView <UICollectionViewDataSource> {

	MiroColorSelectionController* _colorSelectionController;
	UICollectionView* _colorSwatchCollectionView;
	UILabel* _label1;
	UILabel* _label2;
	UILabel* _label3;

}

@property (nonatomic,retain) MiroColorSelectionController * colorSelectionController;              //@synthesize colorSelectionController=_colorSelectionController - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * colorSwatchCollectionView;                  //@synthesize colorSwatchCollectionView=_colorSwatchCollectionView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label1;                                              //@synthesize label1=_label1 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label2;                                              //@synthesize label2=_label2 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label3;                                              //@synthesize label3=_label3 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)colorSwatchCollectionView;
-(void)setColorSwatchCollectionView:(UICollectionView *)arg1 ;
-(void)setColorSelectionController:(MiroColorSelectionController *)arg1 ;
-(MiroColorSelectionController *)colorSelectionController;
-(UILabel *)label2;
-(UILabel *)label3;
-(void)_configureCell:(id)arg1 withColor:(id)arg2 overrideBorderColor:(id)arg3 emphasize:(BOOL)arg4 label:(id)arg5 ;
-(id)_labelTextIfSafeDominantColor:(id)arg1 ;
-(id)_labelTextIfSafeAccentColor:(id)arg1 ;
-(void)setupWithClipProvider:(id)arg1 ;
-(UILabel *)label1;
-(void)setLabel1:(UILabel *)arg1 ;
-(void)setLabel2:(UILabel *)arg1 ;
-(void)setLabel3:(UILabel *)arg1 ;
@end


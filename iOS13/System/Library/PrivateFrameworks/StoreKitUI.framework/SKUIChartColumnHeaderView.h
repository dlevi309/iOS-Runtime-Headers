/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIControl.h>

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {

	NSArray* _buttons;
	long long _selectedTitleIndex;

}

@property (nonatomic,readonly) double edgePadding; 
@property (assign,nonatomic) long long selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(double)edgePadding;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
@end


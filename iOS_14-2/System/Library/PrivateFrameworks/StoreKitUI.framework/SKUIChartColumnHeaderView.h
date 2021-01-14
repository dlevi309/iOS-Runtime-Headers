/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitles:(NSArray *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(double)edgePadding;
-(NSArray *)titles;
-(void)sizeToFit;
-(void)dealloc;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
@end


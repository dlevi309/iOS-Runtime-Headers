/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray;

@interface SKUIShelfLayoutData : NSObject {

	double _columnSpacing;
	NSMutableArray* _columnWidths;
	UIEdgeInsets _contentInset;
	long long _numberOfRows;
	double* _rowHeights;

}

@property (nonatomic,readonly) double columnSpacing;                   //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (nonatomic,readonly) long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) CGSize totalContentSize; 
@property (nonatomic,readonly) long long numberOfColumns; 
-(void)dealloc;
-(long long)numberOfColumns;
-(long long)numberOfRows;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(double)columnSpacing;
-(CGSize)sizeForItemAtIndex:(long long)arg1 ;
-(CGSize)totalContentSize;
-(void)enumerateColumnsUsingBlock:(/*^block*/id)arg1 ;
-(double)columnWidthForIndex:(long long)arg1 ;
-(double)rowHeightForIndex:(long long)arg1 ;
-(id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2 ;
-(void)reloadWithItemCount:(long long)arg1 sizeBlock:(/*^block*/id)arg2 ;
@end


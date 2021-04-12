/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSString;

@interface HUQuickControlCollectionGridLayoutSettings : NSObject {

	unsigned long long _sectionNumber;
	NSString* _sectionIdentifier;
	NSString* _sectionHeader;
	unsigned long long _numberOfItems;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;
	long long _horizontalAlignment;
	unsigned long long _itemSize;
	double _rowSpacing;
	double _interitemSpacing;
	unsigned long long _preferredLayoutStyle;
	double _sectionTopPadding;
	unsigned long long _titlePosition;

}

@property (assign,nonatomic) unsigned long long sectionNumber;                     //@synthesize sectionNumber=_sectionNumber - In the implementation block
@property (nonatomic,retain) NSString * sectionIdentifier;                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sectionHeader;                             //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItems;                     //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                      //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                   //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                        //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                          //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                    //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayoutStyle;              //@synthesize preferredLayoutStyle=_preferredLayoutStyle - In the implementation block
@property (assign,nonatomic) double sectionTopPadding;                             //@synthesize sectionTopPadding=_sectionTopPadding - In the implementation block
@property (assign,nonatomic) unsigned long long titlePosition;                     //@synthesize titlePosition=_titlePosition - In the implementation block
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)itemSize;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(unsigned long long)numberOfItems;
-(unsigned long long)numberOfRows;
-(double)interitemSpacing;
-(void)setSectionTopPadding:(double)arg1 ;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(long long)horizontalAlignment;
-(unsigned long long)preferredLayoutStyle;
-(void)setInteritemSpacing:(double)arg1 ;
-(NSString *)sectionHeader;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setItemSize:(unsigned long long)arg1 ;
-(double)sectionTopPadding;
-(void)setSectionNumber:(unsigned long long)arg1 ;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(void)setPreferredLayoutStyle:(unsigned long long)arg1 ;
-(unsigned long long)sectionNumber;
-(unsigned long long)titlePosition;
@end


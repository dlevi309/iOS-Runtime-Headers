/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUQuickControlCollectionGridLayoutSettings, HUQuickControlCollectionViewGridLayoutRowInfo, NSArray;

@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject {

	HUQuickControlCollectionGridLayoutSettings* _settings;
	unsigned long long _sectionIndex;
	HUQuickControlCollectionViewGridLayoutRowInfo* _sectionHeaderLayout;
	NSArray* _rowLayouts;
	CGRect _contentFrame;

}

@property (nonatomic,retain) HUQuickControlCollectionGridLayoutSettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                              //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                                  //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewGridLayoutRowInfo * sectionHeaderLayout;              //@synthesize sectionHeaderLayout=_sectionHeaderLayout - In the implementation block
@property (nonatomic,copy) NSArray * rowLayouts;                                                               //@synthesize rowLayouts=_rowLayouts - In the implementation block
-(CGRect)contentFrame;
-(HUQuickControlCollectionGridLayoutSettings *)settings;
-(void)setSettings:(HUQuickControlCollectionGridLayoutSettings *)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)setSectionHeaderLayout:(HUQuickControlCollectionViewGridLayoutRowInfo *)arg1 ;
-(HUQuickControlCollectionViewGridLayoutRowInfo *)sectionHeaderLayout;
-(void)setRowLayouts:(NSArray *)arg1 ;
-(unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1 ;
-(id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(NSArray *)rowLayouts;
-(id)indexPathForSectionHeader;
@end


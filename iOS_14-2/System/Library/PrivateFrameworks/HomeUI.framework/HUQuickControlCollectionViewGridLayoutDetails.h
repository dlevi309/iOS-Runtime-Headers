/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentFrame:(CGRect)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)setSettings:(HUQuickControlCollectionGridLayoutSettings *)arg1 ;
-(HUQuickControlCollectionGridLayoutSettings *)settings;
-(void)setSectionHeaderLayout:(HUQuickControlCollectionViewGridLayoutRowInfo *)arg1 ;
-(HUQuickControlCollectionViewGridLayoutRowInfo *)sectionHeaderLayout;
-(void)setRowLayouts:(NSArray *)arg1 ;
-(unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1 ;
-(id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(NSArray *)rowLayouts;
-(id)indexPathForSectionHeader;
@end


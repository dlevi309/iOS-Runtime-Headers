/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/TLKSelectableGridViewDelegate.h>

@class TLKSelectableGridView, NSString;

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>

@property (nonatomic,retain) TLKSelectableGridView * contentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2 ;
-(id)convertSFTitleSubtitleData:(id)arg1 ;
-(id)setupContentView;
@end


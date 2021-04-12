/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)setupContentView;
-(void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)convertSFTitleSubtitleData:(id)arg1 ;
@end


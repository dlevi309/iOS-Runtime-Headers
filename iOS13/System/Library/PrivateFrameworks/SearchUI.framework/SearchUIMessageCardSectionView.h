/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKMessageView;

@interface SearchUIMessageCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKMessageView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(unsigned long long*)messageStatusForSearchUIMessageStatus:(int)arg1 ;
-(unsigned long long*)messageServiceTypeForSearchUIMessageServiceType:(int)arg1 ;
@end


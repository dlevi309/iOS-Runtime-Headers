/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/TLKDescriptionViewDelegate.h>

@class TLKDescriptionView, NSString;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate> {

	BOOL _expanded;

}

@property (nonatomic,retain) TLKDescriptionView * contentView; 
@property (assign,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
-(void)setExpanded:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)expanded;
-(void)didPressMoreButton;
-(void)didPressFootnoteButton;
-(void)didPressTrailingFootnoteButton;
-(id)setupContentView;
@end


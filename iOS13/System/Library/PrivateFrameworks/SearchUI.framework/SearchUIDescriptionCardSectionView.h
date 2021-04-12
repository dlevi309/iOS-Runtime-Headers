/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(id)setupContentView;
-(void)didPressMoreButton;
-(void)didPressFootnoteButton;
-(void)updateWithRowModel:(id)arg1 ;
@end


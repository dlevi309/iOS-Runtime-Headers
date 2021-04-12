/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController {

	BOOL _shouldCenter;
	TLKAuxilliaryTextView* _auxilliaryTextView;

}

@property (nonatomic,retain) TLKAuxilliaryTextView * auxilliaryTextView;              //@synthesize auxilliaryTextView=_auxilliaryTextView - In the implementation block
@property (assign,nonatomic) BOOL shouldCenter;                                       //@synthesize shouldCenter=_shouldCenter - In the implementation block
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(BOOL)shouldCenter;
-(void)setAuxilliaryTextView:(TLKAuxilliaryTextView *)arg1 ;
-(TLKAuxilliaryTextView *)auxilliaryTextView;
-(void)setShouldCenter:(BOOL)arg1 ;
@end


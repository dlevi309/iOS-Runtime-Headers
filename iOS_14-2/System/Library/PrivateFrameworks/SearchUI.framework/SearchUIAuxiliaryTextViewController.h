/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupView;
-(void)setAuxilliaryTextView:(TLKAuxilliaryTextView *)arg1 ;
-(TLKAuxilliaryTextView *)auxilliaryTextView;
-(BOOL)shouldCenter;
-(void)setShouldCenter:(BOOL)arg1 ;
-(unsigned long long)type;
-(BOOL)shouldVerticallyCenter;
@end


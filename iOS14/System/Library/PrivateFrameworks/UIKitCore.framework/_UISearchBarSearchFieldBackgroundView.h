/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldRoundedRectBackgroundViewNeue.h>

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {

	BOOL _showingTouch;
	BOOL _backgroundContainer;
	BOOL _showingCursor;
	long long _barStyle;
	unsigned long long _searchBarStyle;

}

@property (assign,nonatomic) long long barStyle;                             //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;              //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,nonatomic) BOOL showingTouch;                              //@synthesize showingTouch=_showingTouch - In the implementation block
@property (assign,nonatomic) BOOL backgroundContainer;                       //@synthesize backgroundContainer=_backgroundContainer - In the implementation block
@property (assign,nonatomic) BOOL showingCursor;                             //@synthesize showingCursor=_showingCursor - In the implementation block
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(id)_fillColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(BOOL)showingTouch;
-(id)_automaticFillColorForActive:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setShowingCursor:(BOOL)arg1 ;
-(void)setShowingTouch:(BOOL)arg1 ;
-(BOOL)showingCursor;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)backgroundContainer;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
@end


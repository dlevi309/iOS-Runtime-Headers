/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCornerRadius:(double)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(void)setShowingTouch:(BOOL)arg1 ;
-(void)setShowingCursor:(BOOL)arg1 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)_automaticFillColorForActive:(BOOL)arg1 ;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2 ;
-(BOOL)showingTouch;
-(BOOL)showingCursor;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(BOOL)backgroundContainer;
@end


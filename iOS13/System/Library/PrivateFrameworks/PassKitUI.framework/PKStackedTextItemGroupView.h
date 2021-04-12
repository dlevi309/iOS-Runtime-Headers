/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupView : UIView {

	double _intrinsicHeight;
	CGSize _boundsSize;
	BOOL _initialLayout[2];
	NSMutableArray* _itemViews;
	NSMutableArray* _snapshotsToRemove;
	BOOL _animated;
	long long _slideMode;
	long long _style;
	PKStackedTextItemGroup* _content;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKStackedTextItemGroup * content;              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                     //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double headerPadding; 
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(PKStackedTextItemGroup *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(double)headerPadding;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
@end


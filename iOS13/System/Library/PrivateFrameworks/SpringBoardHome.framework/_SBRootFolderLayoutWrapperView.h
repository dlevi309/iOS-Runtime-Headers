/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _SBRootFolderLayoutWrapperView : UIView {

	double _statusBarHeightAdjustment;
	double _headerOffset;
	UIView* _wrappedView;
	CGSize _extendedSize;

}

@property (assign,nonatomic) double statusBarHeightAdjustment;              //@synthesize statusBarHeightAdjustment=_statusBarHeightAdjustment - In the implementation block
@property (assign,nonatomic) double headerOffset;                           //@synthesize headerOffset=_headerOffset - In the implementation block
@property (assign,nonatomic) CGSize extendedSize;                           //@synthesize extendedSize=_extendedSize - In the implementation block
@property (nonatomic,retain) UIView * wrappedView;                          //@synthesize wrappedView=_wrappedView - In the implementation block
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateLayout;
-(UIView *)wrappedView;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)setHeaderOffset:(double)arg1 ;
-(double)headerOffset;
-(void)setExtendedSize:(CGSize)arg1 ;
-(void)setStatusBarHeightAdjustment:(double)arg1 ;
-(double)statusBarHeightAdjustment;
-(CGSize)extendedSize;
@end


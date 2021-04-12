/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBIconLayoutOverrideStrategy, SBFolderView, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView {

	double _statusBarHeight;
	SBIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	SBFolderView* _folderView;
	SBFolderContainerView* _childFolderContainerView;
	UIView* _backgroundView;

}

@property (nonatomic,readonly) SBFolderView * folderView;                                            //@synthesize folderView=_folderView - In the implementation block
@property (nonatomic,retain) SBFolderContainerView * childFolderContainerView; 
@property (nonatomic,retain) UIView * backgroundView;                                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                                 //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) SBIconLayoutOverrideStrategy * iconLayoutOverrideStrategy;              //@synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(double)statusBarHeight;
-(void)setStatusBarHeight:(double)arg1 ;
-(id)initWithFolderView:(id)arg1 statusBarHeight:(double)arg2 ;
-(SBFolderView *)folderView;
-(void)setChildFolderContainerView:(SBFolderContainerView *)arg1 ;
-(SBIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBIconLayoutOverrideStrategy *)arg1 ;
-(CGRect)_frameForFolderView:(id)arg1 ;
-(SBFolderContainerView *)childFolderContainerView;
@end


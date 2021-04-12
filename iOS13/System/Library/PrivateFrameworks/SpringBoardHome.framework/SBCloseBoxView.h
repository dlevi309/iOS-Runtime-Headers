/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBHomeScreenButton.h>

@protocol SBCloseBoxViewDelegate, SBIconListLayout;
@class UITapGestureRecognizer;

@interface SBCloseBoxView : SBHomeScreenButton {

	UITapGestureRecognizer* _actionTapGestureRecognizer;
	id<SBCloseBoxViewDelegate> _delegate;
	id<SBIconListLayout> _listLayout;

}

@property (nonatomic,retain) UITapGestureRecognizer * actionTapGestureRecognizer;              //@synthesize actionTapGestureRecognizer=_actionTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBCloseBoxViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBIconListLayout> listLayout;                                  //@synthesize listLayout=_listLayout - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestPadding; 
+(BOOL)supportsCursorInteraction;
+(UIEdgeInsets)backgroundInsets;
-(id<SBCloseBoxViewDelegate>)delegate;
-(void)setDelegate:(id<SBCloseBoxViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)shouldTrack;
-(UIEdgeInsets)hitTestPadding;
-(void)setListLayout:(id<SBIconListLayout>)arg1 ;
-(id<SBIconListLayout>)listLayout;
-(UITapGestureRecognizer *)actionTapGestureRecognizer;
-(void)setActionTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PMEditorPlayerViewDelegate, PMEditorToolbarOwner;
@class UIView, NSLayoutConstraint;

@interface PMEditorBasePlayerViewController : UIViewController {

	id<PMEditorPlayerViewDelegate> _playerViewDelegate;
	id<PMEditorToolbarOwner> _toolbarOwner;
	UIView* _playerContainerView;
	UIView* _tableHeaderWithSpaceView;
	UIView* _snapshotView;
	NSLayoutConstraint* _playerContainerHeightConstraint;
	NSLayoutConstraint* _playerContainerWidthConstraint;
	NSLayoutConstraint* _tableHeaderHeightConstraint;

}

@property (nonatomic,retain) UIView * snapshotView;                                                 //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerContainerHeightConstraint;                  //@synthesize playerContainerHeightConstraint=_playerContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerContainerWidthConstraint;                   //@synthesize playerContainerWidthConstraint=_playerContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableHeaderHeightConstraint;                      //@synthesize tableHeaderHeightConstraint=_tableHeaderHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditorPlayerViewDelegate> playerViewDelegate;              //@synthesize playerViewDelegate=_playerViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditorToolbarOwner> toolbarOwner;                          //@synthesize toolbarOwner=_toolbarOwner - In the implementation block
@property (nonatomic,retain) UIView * playerContainerView;                                          //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (nonatomic,retain) UIView * tableHeaderWithSpaceView;                                     //@synthesize tableHeaderWithSpaceView=_tableHeaderWithSpaceView - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id<PMEditorPlayerViewDelegate>)playerViewDelegate;
-(void)setPlayerViewDelegate:(id<PMEditorPlayerViewDelegate>)arg1 ;
-(UIView *)playerContainerView;
-(void)setPlayerContainerView:(UIView *)arg1 ;
-(id<PMEditorToolbarOwner>)toolbarOwner;
-(void)setToolbarOwner:(id<PMEditorToolbarOwner>)arg1 ;
-(double)heightForPlayerView;
-(void)setTableHeaderWithSpaceView:(UIView *)arg1 ;
-(UIView *)tableHeaderWithSpaceView;
-(void)setPlayerContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)playerContainerHeightConstraint;
-(void)setPlayerContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)playerContainerWidthConstraint;
-(NSLayoutConstraint *)tableHeaderHeightConstraint;
-(void)setTableHeaderHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end


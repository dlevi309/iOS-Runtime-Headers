/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIView;

@interface ICCollapsibleContainerView : ICCollapsibleBaseView {

	UIView* _containedView;

}

@property (nonatomic,retain) UIView * containedView;              //@synthesize containedView=_containedView - In the implementation block
-(void)setContainedView:(UIView *)arg1 ;
-(UIView *)containedView;
-(void)performSetup;
@end


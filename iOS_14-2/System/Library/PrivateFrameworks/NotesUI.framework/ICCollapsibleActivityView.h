/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIActivityIndicatorView;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView {

	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) BOOL isAnimating; 
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)performSetup;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKAppGrabberViewDelegate;
@class UIImageView, UILabel, UIButton, UIView, _UIGrabber, NSString;

@interface CKAppGrabberView : UIView {

	UIImageView* _iconImageView;
	UIImageView* _iconOutlineView;
	UILabel* _pluginTitleLabel;
	UIButton* _closeButton;
	UIView* _headerView;
	UIView* _grayLine;
	_UIGrabber* _chevronView;
	NSString* _appIdentifier;
	BOOL _showsAppTitle;
	BOOL _roundsTopCorners;
	id<CKAppGrabberViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKAppGrabberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsGrabberPill; 
@property (assign,nonatomic) BOOL showsAppTitle;                                        //@synthesize showsAppTitle=_showsAppTitle - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                  //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) BOOL roundsTopCorners;                                     //@synthesize roundsTopCorners=_roundsTopCorners - In the implementation block
@property (nonatomic,readonly) double visualOriginYOffset; 
@property (nonatomic,readonly) double chevronMaxYOffset; 
+(double)roundedCornerRadius;
+(double)compactRoundedCornerRadius;
-(id)iconImageView;
-(void)setShowsAppTitle:(BOOL)arg1 ;
-(void)setShowsGrabberPill:(BOOL)arg1 ;
-(void)updateAppTitle:(id)arg1 icon:(id)arg2 appIdentifier:(id)arg3 ;
-(void)setRoundsTopCorners:(BOOL)arg1 ;
-(BOOL)roundsTopCorners;
-(double)visualOriginYInView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKAppGrabberViewDelegate>)delegate;
-(void)setDelegate:(id<CKAppGrabberViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)headerView;
-(void)updateHeaderFrame:(BOOL)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(void)updateIconImageView:(id)arg1 ;
-(BOOL)showsGrabberPill;
-(double)visualOriginYOffset;
-(double)chevronMaxYOffset;
-(double)chevronMaxYInView:(id)arg1 ;
-(BOOL)showsAppTitle;
-(UIButton *)closeButton;
@end


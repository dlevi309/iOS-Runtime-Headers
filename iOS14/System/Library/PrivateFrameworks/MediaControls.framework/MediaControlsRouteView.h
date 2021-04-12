/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class NSString, MTVisualStylingProvider, UILabel, CCUICAPackageView, NSTimer;

@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate> {

	BOOL _labelHidden;
	BOOL _displayMessage;
	NSString* _title;
	NSString* _packageName;
	MTVisualStylingProvider* _visualStylingProvider;
	UILabel* _titleLabel;
	CCUICAPackageView* _packageView;
	UILabel* _messageLabel;
	NSTimer* _messageTimer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * packageView;                              //@synthesize packageView=_packageView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSTimer * messageTimer;                                       //@synthesize messageTimer=_messageTimer - In the implementation block
@property (assign,nonatomic) BOOL displayMessage;                                          //@synthesize displayMessage=_displayMessage - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * packageName;                                       //@synthesize packageName=_packageName - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,getter=isLabelHidden,nonatomic) BOOL labelHidden;                        //@synthesize labelHidden=_labelHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)_contentSizeCategoryDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(BOOL)isLabelHidden;
-(void)setLabelHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)setGlyphState:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(NSString *)packageName;
-(void)layoutSubviews;
-(BOOL)displayMessage;
-(void)setDisplayMessage:(BOOL)arg1 ;
-(NSString *)title;
-(void)showMessage:(id)arg1 ;
-(NSTimer *)messageTimer;
-(void)setPackageName:(NSString *)arg1 ;
-(void)_updateLabelVisualStyling;
-(void)setMessageTimer:(NSTimer *)arg1 ;
@end


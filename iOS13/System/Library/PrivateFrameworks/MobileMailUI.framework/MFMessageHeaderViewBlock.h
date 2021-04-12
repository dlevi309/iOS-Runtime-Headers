/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MFReusable.h>

@protocol EFCancelable;
@class MessageHeaderViewModel, MFMessageDisplayMetrics, SeparatorLayer, UILayoutGuide, NSLayoutConstraint, NSString;

@interface MFMessageHeaderViewBlock : UIView <MFReusable> {

	BOOL _separatorIsHidden;
	BOOL _separatorDrawsFlushWithLeadingEdge;
	BOOL _separatorDrawsFlushWithTrailingEdge;
	BOOL _usingLargeTextLayout;
	MessageHeaderViewModel* _viewModel;
	MFMessageDisplayMetrics* _displayMetrics;
	SeparatorLayer* _separator;
	UILayoutGuide* _trailingAccessoryViewLayoutGuide;
	NSLayoutConstraint* _trailingAccessoryViewLayoutGuideWidth;
	NSLayoutConstraint* _trailingAccessoryViewLayoutGuideTrailing;
	NSLayoutConstraint* _separatorLeading;
	NSLayoutConstraint* _separatorTrailing;
	id<EFCancelable> _observableCancelable;

}

@property (nonatomic,retain) MessageHeaderViewModel * viewModel;                                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SeparatorLayer * separator;                                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UILayoutGuide * trailingAccessoryViewLayoutGuide;                           //@synthesize trailingAccessoryViewLayoutGuide=_trailingAccessoryViewLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingAccessoryViewLayoutGuideWidth;                 //@synthesize trailingAccessoryViewLayoutGuideWidth=_trailingAccessoryViewLayoutGuideWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingAccessoryViewLayoutGuideTrailing;              //@synthesize trailingAccessoryViewLayoutGuideTrailing=_trailingAccessoryViewLayoutGuideTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorLeading;                                      //@synthesize separatorLeading=_separatorLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorTrailing;                                     //@synthesize separatorTrailing=_separatorTrailing - In the implementation block
@property (nonatomic,retain) id<EFCancelable> observableCancelable;                                      //@synthesize observableCancelable=_observableCancelable - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                                   //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic) BOOL separatorIsHidden;                                                     //@synthesize separatorIsHidden=_separatorIsHidden - In the implementation block
@property (assign,nonatomic) BOOL separatorDrawsFlushWithLeadingEdge;                                    //@synthesize separatorDrawsFlushWithLeadingEdge=_separatorDrawsFlushWithLeadingEdge - In the implementation block
@property (assign,nonatomic) BOOL separatorDrawsFlushWithTrailingEdge;                                   //@synthesize separatorDrawsFlushWithTrailingEdge=_separatorDrawsFlushWithTrailingEdge - In the implementation block
@property (assign,nonatomic) BOOL usingLargeTextLayout;                                                  //@synthesize usingLargeTextLayout=_usingLargeTextLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(SeparatorLayer *)separator;
-(void)setSeparator:(SeparatorLayer *)arg1 ;
-(MessageHeaderViewModel *)viewModel;
-(void)setViewModel:(MessageHeaderViewModel *)arg1 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(UILayoutGuide *)trailingAccessoryViewLayoutGuide;
-(void)setSeparatorIsHidden:(BOOL)arg1 ;
-(void)displayMessageUsingViewModel:(id)arg1 ;
-(BOOL)separatorIsHidden;
-(void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)arg1 ;
-(void)createPrimaryViews;
-(void)initializePrimaryLayoutConstraints;
-(void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(void)setTrailingAccessoryViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setTrailingAccessoryViewLayoutGuideWidth:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingAccessoryViewLayoutGuideTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingAccessoryViewLayoutGuideWidth;
-(NSLayoutConstraint *)trailingAccessoryViewLayoutGuideTrailing;
-(void)setUsingLargeTextLayout:(BOOL)arg1 ;
-(NSLayoutConstraint *)separatorLeading;
-(void)setSeparatorLeading:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)separatorTrailing;
-(void)setSeparatorTrailing:(NSLayoutConstraint *)arg1 ;
-(id<EFCancelable>)observableCancelable;
-(void)setObservableCancelable:(id<EFCancelable>)arg1 ;
-(BOOL)separatorDrawsFlushWithLeadingEdge;
-(BOOL)separatorDrawsFlushWithTrailingEdge;
-(BOOL)usingLargeTextLayout;
@end


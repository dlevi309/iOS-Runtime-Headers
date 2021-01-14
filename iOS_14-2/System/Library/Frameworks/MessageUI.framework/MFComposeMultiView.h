/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>

@protocol MFComposeMultiViewDelegate;
@class UILabel, CNComposeHeaderLabelView, NSString;

@interface MFComposeMultiView : MFMailComposeHeaderView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {

	UILabel* _accountLabel;
	CNComposeHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	BOOL _imageSizeShown;
	NSString* _accountDescription;
	BOOL _accountHasUnsafeDomain;
	BOOL _accountAutoselected;
	id<MFComposeMultiViewDelegate> _scribbleDelegate;

}

@property (assign,getter=isAccountAutoselected,nonatomic) BOOL accountAutoselected;               //@synthesize accountAutoselected=_accountAutoselected - In the implementation block
@property (assign,nonatomic) BOOL accountHasUnsafeDomain;                                         //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeMultiViewDelegate> scribbleDelegate;              //@synthesize scribbleDelegate=_scribbleDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountDescription:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(id)labelColor;
-(void)layoutSubviews;
-(id)accountLabel;
-(id)_accountDescriptionAttributedString;
-(id)imageSizeLabel;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(id)imageSizeHeaderLabelView;
-(id)placeholderImageSizeLabel;
-(id<MFComposeMultiViewDelegate>)scribbleDelegate;
-(void)setAccountHasUnsafeDomain:(BOOL)arg1 ;
-(void)setImageSizeDescription:(id)arg1 ;
-(void)setShowsImageSize:(BOOL)arg1 ;
-(void)setAccountAutoselected:(BOOL)arg1 ;
-(BOOL)accountHasUnsafeDomain;
-(BOOL)isAccountAutoselected;
-(void)setScribbleDelegate:(id<MFComposeMultiViewDelegate>)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)refreshPreferredContentSize;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
@end


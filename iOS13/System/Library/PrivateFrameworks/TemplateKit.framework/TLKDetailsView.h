/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/TLKTextAreaViewDelegate.h>
#import <libobjc.A.dylib/TLKTextAreaViewTesting.h>

@protocol TLKDetailsViewDelegate;
@class TLKRichText, TLKMultilineText, TLKImage, NSArray, NSString, TLKTextAreaView;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate, TLKTextAreaViewTesting> {

	BOOL _secondaryTitleIsDetached;
	TLKRichText* _title;
	id<TLKDetailsViewDelegate> _delegate;
	TLKMultilineText* _secondaryTitle;
	TLKImage* _secondaryTitleImage;
	NSArray* _details;
	TLKRichText* _footnote;
	NSString* _footnoteButtonText;

}

@property (nonatomic,retain) TLKTextAreaView * contentView; 
@property (nonatomic,retain) TLKRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<TLKDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TLKMultilineText * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign,nonatomic) BOOL secondaryTitleIsDetached;                           //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (nonatomic,retain) TLKImage * secondaryTitleImage;                          //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (nonatomic,retain) NSArray * details;                                       //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) TLKRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) NSString * footnoteButtonText;                           //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TLKDetailsViewDelegate>)delegate;
-(void)setDelegate:(id<TLKDetailsViewDelegate>)arg1 ;
-(TLKRichText *)title;
-(void)setTitle:(TLKRichText *)arg1 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(TLKRichText *)footnote;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(void)setSecondaryTitle:(TLKMultilineText *)arg1 ;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
-(TLKMultilineText *)secondaryTitle;
-(TLKImage *)secondaryTitleImage;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)footnoteButtonPressed;
-(BOOL)secondaryTitleIsDetached;
-(NSString *)footnoteButtonText;
-(id)textAreaLabelStrings;
-(id)footnoteLabelString;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
@end


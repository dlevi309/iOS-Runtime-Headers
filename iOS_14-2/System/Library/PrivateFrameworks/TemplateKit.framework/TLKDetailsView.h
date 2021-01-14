/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/TLKTextAreaViewDelegate.h>

@protocol TLKDetailsViewDelegate;
@class TLKTextAreaView, TLKRichText, TLKImage, NSArray, NSString;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate> {

	id<TLKDetailsViewDelegate> _delegate;

}

@property (nonatomic,retain) TLKTextAreaView * contentView; 
@property (assign,nonatomic) BOOL useCompactMode; 
@property (nonatomic,retain) TLKRichText * bannerBadge; 
@property (nonatomic,retain) TLKRichText * title; 
@property (assign,nonatomic) BOOL truncateTitleMiddle; 
@property (assign,nonatomic,__weak) id<TLKDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TLKRichText * secondaryTitle; 
@property (assign,nonatomic) BOOL secondaryTitleIsDetached; 
@property (nonatomic,retain) TLKImage * secondaryTitleImage; 
@property (nonatomic,retain) NSArray * details; 
@property (nonatomic,retain) TLKRichText * footnote; 
@property (nonatomic,retain) NSString * footnoteButtonText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDetails:(NSArray *)arg1 ;
-(void)layoutMarginsDidChange;
-(id)viewForLastBaselineLayout;
-(void)setSecondaryTitle:(TLKRichText *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id<TLKDetailsViewDelegate>)delegate;
-(void)setTitle:(TLKRichText *)arg1 ;
-(TLKImage *)secondaryTitleImage;
-(id)footnoteLabel;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(void)setDelegate:(id<TLKDetailsViewDelegate>)arg1 ;
-(id)footnoteContainer;
-(TLKRichText *)footnote;
-(NSArray *)details;
-(TLKRichText *)secondaryTitle;
-(BOOL)useCompactMode;
-(id)setupContentView;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(void)footnoteButtonPressed;
-(BOOL)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(BOOL)arg1 ;
-(BOOL)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(id)titleContainer;
-(id)detailsFields;
-(id)detailsStrings;
-(id)footnoteLabelString;
-(id)footnoteButton;
-(TLKRichText *)bannerBadge;
-(void)setBannerBadge:(TLKRichText *)arg1 ;
-(TLKRichText *)title;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
@end


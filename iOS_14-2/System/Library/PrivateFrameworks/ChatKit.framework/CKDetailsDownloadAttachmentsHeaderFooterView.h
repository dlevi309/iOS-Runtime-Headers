/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/CKDetailsHeaderFooterView.h>

@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;
@class NSString, UIColor, UIImageView, UITextView, NSLayoutConstraint;

@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {

	BOOL _logoHidden;
	NSString* _titleText;
	NSString* _buttonText;
	id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;
	UIColor* _downloadButtonTextColor;
	UIColor* _titleTextColor;
	UIImageView* _iCloudImageView;
	UITextView* _titleTextView;
	UITextView* _buttonTextView;
	NSLayoutConstraint* _titleTextTopToLogoConstraint;
	NSLayoutConstraint* _titleTextTopToViewConstraint;

}

@property (nonatomic,retain) UIImageView * iCloudImageView;                                                         //@synthesize iCloudImageView=_iCloudImageView - In the implementation block
@property (nonatomic,retain) UITextView * titleTextView;                                                            //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) UITextView * buttonTextView;                                                           //@synthesize buttonTextView=_buttonTextView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTextTopToLogoConstraint;                                     //@synthesize titleTextTopToLogoConstraint=_titleTextTopToLogoConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTextTopToViewConstraint;                                     //@synthesize titleTextTopToViewConstraint=_titleTextTopToViewConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                                   //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * downloadButtonTextColor;                                                     //@synthesize downloadButtonTextColor=_downloadButtonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                                                              //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (assign,nonatomic) BOOL logoHidden;                                                                       //@synthesize logoHidden=_logoHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setDownloadButtonTextColor:(UIColor *)arg1 ;
-(void)setLogoHidden:(BOOL)arg1 ;
-(id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate>)delegate;
-(NSString *)buttonText;
-(NSString *)titleText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(BOOL)logoHidden;
-(void)setDelegate:(id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitleTextTopToLogoConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleTextTopToViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleTextTopToLogoConstraint;
-(NSLayoutConstraint *)titleTextTopToViewConstraint;
-(void)handleUserTap:(id)arg1 ;
-(UITextView *)titleTextView;
-(UITextView *)buttonTextView;
-(UIImageView *)iCloudImageView;
-(UIColor *)downloadButtonTextColor;
-(void)setICloudImageView:(UIImageView *)arg1 ;
-(void)setTitleTextView:(UITextView *)arg1 ;
-(void)setButtonTextView:(UITextView *)arg1 ;
-(UIColor *)titleTextColor;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
@end


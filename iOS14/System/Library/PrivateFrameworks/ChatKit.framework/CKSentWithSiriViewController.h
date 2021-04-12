/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CKConversation, UIScrollView, UIView, UILabel, UIImageView, NSString;

@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate> {

	CKConversation* _conversation;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _contextDescriptionLabel;
	UIImageView* _heroImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) CKConversation * conversation;                  //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * contextDescriptionLabel;              //@synthesize contextDescriptionLabel=_contextDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * heroImageView;                    //@synthesize heroImageView=_heroImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UILabel *)subtitleLabel;
-(CKConversation *)conversation;
-(UIImageView *)heroImageView;
-(id)_titleLabelText;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)setHeroImageView:(UIImageView *)arg1 ;
-(void)setContextDescriptionLabel:(UILabel *)arg1 ;
-(id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2 ;
-(UILabel *)contextDescriptionLabel;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIView *)contentView;
-(id)inputAccessoryViewController;
-(UIScrollView *)scrollView;
-(UILabel *)detailLabel;
@end


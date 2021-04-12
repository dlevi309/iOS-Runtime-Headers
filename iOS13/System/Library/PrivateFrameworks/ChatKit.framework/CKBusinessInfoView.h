/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKBusinessInfoViewDelegate;
@class NSString, UILabel, UIButton;

@interface CKBusinessInfoView : UIView {

	id<CKBusinessInfoViewDelegate> _delegate;
	NSString* _descriptionText;
	long long _layoutType;
	UILabel* _descriptionTextLabel;
	UIButton* _infoButton;

}

@property (assign,nonatomic) long long layoutType;                                        //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UILabel * descriptionTextLabel;                              //@synthesize descriptionTextLabel=_descriptionTextLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                       //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) id<CKBusinessInfoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                  //@synthesize descriptionText=_descriptionText - In the implementation block
-(id<CKBusinessInfoViewDelegate>)delegate;
-(void)setDelegate:(id<CKBusinessInfoViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setup;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithLayoutType:(long long)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(long long)layoutType;
-(UILabel *)descriptionTextLabel;
-(void)setLayoutType:(long long)arg1 ;
-(void)setDescriptionTextLabel:(UILabel *)arg1 ;
@end


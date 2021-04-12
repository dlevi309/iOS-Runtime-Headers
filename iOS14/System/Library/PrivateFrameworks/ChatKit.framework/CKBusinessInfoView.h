/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKBusinessInfoViewDelegate;
@class NSString, UILabel, CKStandardButton;

@interface CKBusinessInfoView : UIView {

	id<CKBusinessInfoViewDelegate> _delegate;
	NSString* _descriptionText;
	long long _layoutType;
	UILabel* _descriptionTextLabel;
	CKStandardButton* _infoButton;

}

@property (assign,nonatomic) long long layoutType;                                        //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UILabel * descriptionTextLabel;                              //@synthesize descriptionTextLabel=_descriptionTextLabel - In the implementation block
@property (nonatomic,retain) CKStandardButton * infoButton;                               //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) id<CKBusinessInfoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                  //@synthesize descriptionText=_descriptionText - In the implementation block
-(void)setup;
-(long long)layoutType;
-(id)initWithLayoutType:(long long)arg1 ;
-(id<CKBusinessInfoViewDelegate>)delegate;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setInfoButton:(CKStandardButton *)arg1 ;
-(void)setDelegate:(id<CKBusinessInfoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)descriptionTextLabel;
-(void)setDescriptionTextLabel:(UILabel *)arg1 ;
-(CKStandardButton *)infoButton;
-(void)setLayoutType:(long long)arg1 ;
@end


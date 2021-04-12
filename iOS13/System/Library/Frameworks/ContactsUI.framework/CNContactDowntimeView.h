/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, UILabel, NSTextAttachment;

@interface CNContactDowntimeView : UIView {

	NSDictionary* _ab_textAttributes;
	UILabel* _downtimeLabel;
	NSTextAttachment* _imageAttachment;

}

@property (nonatomic,readonly) UILabel * downtimeLabel;                         //@synthesize downtimeLabel=_downtimeLabel - In the implementation block
@property (nonatomic,readonly) NSTextAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                    //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
+(id)lockImageAttachment;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setupAttributedText;
-(UILabel *)downtimeLabel;
-(NSTextAttachment *)imageAttachment;
@end


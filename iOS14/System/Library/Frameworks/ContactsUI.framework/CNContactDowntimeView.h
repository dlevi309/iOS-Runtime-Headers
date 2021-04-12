/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, UILabel, NSTextAttachment;

@interface CNContactDowntimeView : UIView {

	NSDictionary* _ab_textAttributes;
	long long _elements;
	UILabel* _downtimeLabel;
	NSTextAttachment* _imageAttachment;

}

@property (nonatomic,readonly) UILabel * downtimeLabel;                         //@synthesize downtimeLabel=_downtimeLabel - In the implementation block
@property (nonatomic,readonly) NSTextAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                    //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
@property (assign,nonatomic) long long elements;                                //@synthesize elements=_elements - In the implementation block
+(id)lockImageAttachment;
-(void)setElements:(long long)arg1 ;
-(long long)elements;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateAttributedText;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(UILabel *)downtimeLabel;
-(NSTextAttachment *)imageAttachment;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
@end


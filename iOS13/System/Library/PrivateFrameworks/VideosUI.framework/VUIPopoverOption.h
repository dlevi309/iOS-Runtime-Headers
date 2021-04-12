/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class IKViewElement, IKImageElement, IKTextElement, UIColor, TVImageProxy;

@interface VUIPopoverOption : NSObject {

	IKViewElement* _cardElement;
	IKImageElement* _imageElement;
	IKViewElement* _optionElement;
	IKTextElement* _titleElement;
	unsigned long long _type;
	UIColor* _highlightColor;

}

@property (nonatomic,readonly) IKViewElement * cardElement;                //@synthesize cardElement=_cardElement - In the implementation block
@property (nonatomic,readonly) IKImageElement * imageElement;              //@synthesize imageElement=_imageElement - In the implementation block
@property (nonatomic,readonly) TVImageProxy * imageProxy; 
@property (nonatomic,readonly) IKViewElement * optionElement;              //@synthesize optionElement=_optionElement - In the implementation block
@property (nonatomic,readonly) IKTextElement * titleElement;               //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
-(id)init;
-(unsigned long long)type;
-(id)_init;
-(UIColor *)highlightColor;
-(IKTextElement *)titleElement;
-(IKImageElement *)imageElement;
-(id)initWithViewElement:(id)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)_populateWithElement:(id)arg1 ;
-(IKViewElement *)cardElement;
-(IKViewElement *)optionElement;
@end


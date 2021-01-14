/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IKImageElement *)imageElement;
-(TVImageProxy *)imageProxy;
-(IKTextElement *)titleElement;
-(void)_populateWithElement:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(IKViewElement *)cardElement;
-(IKViewElement *)optionElement;
@end


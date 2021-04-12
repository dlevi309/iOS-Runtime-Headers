/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class IKViewElement, IKImageElement, IKTextElement, NSArray, UIColor, TVImageProxy;

@interface VUIPopoverGroup : NSObject {

	IKViewElement* _groupElement;
	IKImageElement* _downImageElement;
	IKImageElement* _upImageElement;
	IKTextElement* _titleElement;
	NSArray* _groupOptions;
	UIColor* _highlightColor;

}

@property (nonatomic,readonly) IKViewElement * groupElement;                   //@synthesize groupElement=_groupElement - In the implementation block
@property (nonatomic,readonly) IKImageElement * downImageElement;              //@synthesize downImageElement=_downImageElement - In the implementation block
@property (nonatomic,readonly) IKImageElement * upImageElement;                //@synthesize upImageElement=_upImageElement - In the implementation block
@property (nonatomic,readonly) IKTextElement * titleElement;                   //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,readonly) TVImageProxy * downImageProxy; 
@property (nonatomic,readonly) TVImageProxy * upImageProxy; 
@property (nonatomic,copy,readonly) NSArray * groupOptions;                    //@synthesize groupOptions=_groupOptions - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
-(id)init;
-(id)_init;
-(NSArray *)groupOptions;
-(UIColor *)highlightColor;
-(IKTextElement *)titleElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)_populateWithElement:(id)arg1 ;
-(IKViewElement *)groupElement;
-(IKImageElement *)downImageElement;
-(IKImageElement *)upImageElement;
-(TVImageProxy *)downImageProxy;
-(TVImageProxy *)upImageProxy;
@end


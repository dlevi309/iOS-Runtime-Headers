/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class INCodableAttribute, INImage;

@interface INIntentKeyParameter : NSObject {

	INCodableAttribute* _codableAttribute;
	id _value;
	INImage* _image;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) id value;                                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) INImage * image;                                    //@synthesize image=_image - In the implementation block
-(INCodableAttribute *)codableAttribute;
-(INImage *)image;
-(id)initWithCodableAttribute:(id)arg1 value:(id)arg2 image:(id)arg3 ;
-(id)value;
@end


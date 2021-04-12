/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)value;
-(INImage *)image;
-(id)initWithCodableAttribute:(id)arg1 value:(id)arg2 image:(id)arg3 ;
-(INCodableAttribute *)codableAttribute;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSMutableArray, LPLinkHTMLGenerator, DOMElement, NSString;

@interface LPHTMLComponent : NSObject {

	NSMutableArray* _children;
	LPLinkHTMLGenerator* _generator;
	DOMElement* _element;
	NSString* _themePath;

}

@property (nonatomic,__weak,readonly) LPLinkHTMLGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) DOMElement * element;                                //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) NSString * themePath;                                //@synthesize themePath=_themePath - In the implementation block
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(void)addChild:(id)arg1 ;
-(DOMElement *)element;
-(LPLinkHTMLGenerator *)generator;
-(id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3 ;
-(id)childThemePathWithName:(id)arg1 ;
-(NSString *)themePath;
@end


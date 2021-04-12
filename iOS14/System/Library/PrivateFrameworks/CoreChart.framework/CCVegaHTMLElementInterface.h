/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

@class CCVegaCSSStyleDeclaration, NSMutableArray, NSString, NSMutableDictionary;


@protocol CCVegaHTMLElementInterface <JSExport>
@property (nonatomic,retain) CCVegaCSSStyleDeclaration * style; 
@property (nonatomic,retain) NSMutableArray * childNodes; 
@property (nonatomic,retain) NSString * tagName; 
@property (nonatomic,retain) NSMutableDictionary * events; 
@property (nonatomic,retain) NSObject*<CCVegaHTMLElementInterface> parentNode; 
@property (assign,nonatomic) double clientWidth; 
@property (assign,nonatomic) double clientHeight; 
@optional
-(id)removeWithChild:(id)arg1 __JS_EXPORT_AS__removeChild:(id)arg2;
-(id)appendWithChild:(id)arg1 __JS_EXPORT_AS__appendChild:(id)arg2;
-(id)prependWithChild:(id)arg1 __JS_EXPORT_AS__prepend:(id)arg2;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__addEventListener:(id)arg3;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__removeEventListener:(id)arg3;

@required
-(void)setChildNodes:(id)arg1;
-(NSString *)tagName;
-(void)setEvents:(id)arg1;
-(double)clientWidth;
-(double)clientHeight;
-(void)setParentNode:(id)arg1;
-(NSObject*<CCVegaHTMLElementInterface>)parentNode;
-(void)setTagName:(id)arg1;
-(void)setStyle:(id)arg1;
-(NSMutableDictionary *)events;
-(NSMutableArray *)childNodes;
-(CCVegaCSSStyleDeclaration *)style;
-(id)initWithTagName:(id)arg1;
-(void)setClientWidth:(double)arg1;
-(void)setClientHeight:(double)arg1;
-(void)recursiveSetSize:(CGSize)arg1;
-(id)getBoundingClientRect;
-(id)removeWithChild:(id)arg1;
-(id)appendWithChild:(id)arg1;
-(id)prependWithChild:(id)arg1;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2;

@end


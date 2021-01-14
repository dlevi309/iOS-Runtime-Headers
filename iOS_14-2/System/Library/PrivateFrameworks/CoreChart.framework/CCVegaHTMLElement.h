/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaHTMLElementInterface.h>

@protocol CCVegaHTMLElementInterface;
@class CCVegaCSSStyleDeclaration, NSMutableArray, NSString, NSMutableDictionary, NSObject;

@interface CCVegaHTMLElement : NSObject <CCVegaHTMLElementInterface> {

	CCVegaCSSStyleDeclaration* style;
	NSMutableArray* childNodes;
	NSString* tagName;
	NSMutableDictionary* events;
	NSObject*<CCVegaHTMLElementInterface> parentNode;
	double clientWidth;
	double clientHeight;

}

@property (nonatomic,retain) CCVegaCSSStyleDeclaration * style; 
@property (nonatomic,retain) NSMutableArray * childNodes; 
@property (nonatomic,retain) NSString * tagName; 
@property (nonatomic,retain) NSMutableDictionary * events; 
@property (nonatomic,retain) NSObject*<CCVegaHTMLElementInterface> parentNode; 
@property (assign,nonatomic) double clientWidth; 
@property (assign,nonatomic) double clientHeight; 
-(void)setChildNodes:(NSMutableArray *)arg1 ;
-(id)init;
-(NSString *)tagName;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(double)clientWidth;
-(double)clientHeight;
-(void)setParentNode:(NSObject*<CCVegaHTMLElementInterface>)arg1 ;
-(NSObject*<CCVegaHTMLElementInterface>)parentNode;
-(void)setTagName:(NSString *)arg1 ;
-(void)setStyle:(CCVegaCSSStyleDeclaration *)arg1 ;
-(NSMutableDictionary *)events;
-(NSMutableArray *)childNodes;
-(CCVegaCSSStyleDeclaration *)style;
-(id)initWithTagName:(id)arg1 ;
-(void)setClientWidth:(double)arg1 ;
-(void)setClientHeight:(double)arg1 ;
-(void)recursiveSetSize:(CGSize)arg1 ;
-(id)getBoundingClientRect;
-(id)removeWithChild:(id)arg1 ;
-(id)appendWithChild:(id)arg1 ;
-(id)prependWithChild:(id)arg1 ;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 ;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2 ;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2 ;
@end


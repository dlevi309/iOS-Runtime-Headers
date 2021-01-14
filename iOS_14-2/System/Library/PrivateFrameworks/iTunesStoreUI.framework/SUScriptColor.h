/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class UIColor;

@interface SUScriptColor : SUScriptObject {

	UIColor* _color;

}

@property (readonly) UIColor * nativeColor; 
@property (readonly) double red; 
@property (readonly) double green; 
@property (readonly) double blue; 
@property (readonly) double alpha; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)stringRepresentation;
-(double)red;
-(double)alpha;
-(id)attributeKeys;
-(double)blue;
-(double)green;
-(id)initWithUIColor:(id)arg1 ;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithStyleString:(id)arg1 ;
-(UIColor *)nativeColor;
-(CGColorRef)copyCGColor;
-(void)setHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)setWhite:(double)arg1 alpha:(double)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_className;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(id)stringRepresentation;
-(id)initWithUIColor:(id)arg1 ;
-(id)attributeKeys;
-(id)initWithStyleString:(id)arg1 ;
-(id)scriptAttributeKeys;
-(UIColor *)nativeColor;
-(CGColorRef)copyCGColor;
-(void)setHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)setWhite:(double)arg1 alpha:(double)arg2 ;
@end


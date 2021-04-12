/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUGradient, NSString;

@interface SUScriptGradient : SUScriptObject {

	SUGradient* _nativeGradient;

}

@property (readonly) NSString * type; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)type;
-(id)_className;
-(id)attributeKeys;
-(id)initWithGradient:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)copyNativeGradient;
-(void)addColorStopWithOffset:(double)arg1 color:(id)arg2 ;
-(id)initLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(id)initRadialGraidentWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6 ;
-(id)patternColorWithWidth:(double)arg1 height:(double)arg2 opaque:(BOOL)arg3 ;
@end


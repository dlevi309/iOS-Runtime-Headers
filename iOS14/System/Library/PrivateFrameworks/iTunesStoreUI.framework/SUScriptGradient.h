/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(id)initWithGradient:(id)arg1 ;
-(NSString *)type;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)copyNativeGradient;
-(void)addColorStopWithOffset:(double)arg1 color:(id)arg2 ;
-(id)initLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(id)initRadialGraidentWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6 ;
-(id)patternColorWithWidth:(double)arg1 height:(double)arg2 opaque:(BOOL)arg3 ;
@end


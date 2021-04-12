/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPLineFragmentAdornment.h>

@class TSUColor, NSString;

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment> {

	TSUColor* _color;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBackground; 
-(void)dealloc;
-(BOOL)isBackground;
-(id)initWithColor:(id)arg1 bounds:(CGRect)arg2 ;
-(void)drawAdornmentForFragment:(const TSWPLineFragment*)arg1 inContext:(CGContextRef)arg2 withFlags:(unsigned)arg3 state:(const TSWPDrawingState*)arg4 bounds:(CGRect)arg5 ;
@end


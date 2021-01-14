/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKBCacheToken;

@interface UIKeyboardTransitionSlice : NSObject {

	CGRect _startRect;
	CGRect _endRect;
	UIKBCacheToken* _startToken;
	UIKBCacheToken* _endToken;
	BOOL _shiftContents;
	BOOL _delayCrossfade;
	int _normalization;

}

@property (assign) CGRect startRect;                         //@synthesize startRect=_startRect - In the implementation block
@property (assign) CGRect endRect;                           //@synthesize endRect=_endRect - In the implementation block
@property (retain) UIKBCacheToken * startToken;              //@synthesize startToken=_startToken - In the implementation block
@property (retain) UIKBCacheToken * endToken;                //@synthesize endToken=_endToken - In the implementation block
@property (assign) int normalization;                        //@synthesize normalization=_normalization - In the implementation block
@property (assign) BOOL delayCrossfade;                      //@synthesize delayCrossfade=_delayCrossfade - In the implementation block
@property (readonly) BOOL hasGeometry; 
+(id)sliceWithStart:(CGRect)arg1 end:(CGRect)arg2 ;
-(id)init;
-(void)setStartRect:(CGRect)arg1 ;
-(UIKBCacheToken *)endToken;
-(void)setEndToken:(UIKBCacheToken *)arg1 ;
-(id)description;
-(BOOL)hasGeometry;
-(void)setStartToken:(UIKBCacheToken *)arg1 ;
-(void)setNormalization:(int)arg1 ;
-(void)setDelayCrossfade:(BOOL)arg1 ;
-(void)addStartRect:(CGRect)arg1 end:(CGRect)arg2 ;
-(int)normalization;
-(BOOL)delayCrossfade;
-(void)setEndRect:(CGRect)arg1 ;
-(UIKBCacheToken *)startToken;
-(CGRect)endRect;
-(CGRect)startRect;
-(void)dealloc;
@end


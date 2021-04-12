/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(CGRect)startRect;
-(CGRect)endRect;
-(BOOL)hasGeometry;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setStartToken:(UIKBCacheToken *)arg1 ;
-(void)setEndToken:(UIKBCacheToken *)arg1 ;
-(void)setNormalization:(int)arg1 ;
-(void)setDelayCrossfade:(BOOL)arg1 ;
-(void)addStartRect:(CGRect)arg1 end:(CGRect)arg2 ;
-(UIKBCacheToken *)startToken;
-(UIKBCacheToken *)endToken;
-(int)normalization;
-(BOOL)delayCrossfade;
@end


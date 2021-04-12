/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Head : _Geometry {

	float _width;
	float _height;
	float _curHeadTilt;
	float _curHeadX;
	int _inAnimation;
	NSMutableArray* _texs;
	NSMutableArray* _blinkTexs;
	 _bone;
	 _offset;

}

@property (assign,nonatomic) float width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSMutableArray * texs;                   //@synthesize texs=_texs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blinkTexs;              //@synthesize blinkTexs=_blinkTexs - In the implementation block
@property (assign,nonatomic)  bone;                                   //@synthesize bone=_bone - In the implementation block
@property (assign,nonatomic)  offset;                                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) float curHeadTilt;                       //@synthesize curHeadTilt=_curHeadTilt - In the implementation block
@property (assign,nonatomic) float curHeadX;                          //@synthesize curHeadX=_curHeadX - In the implementation block
@property (assign,nonatomic) int inAnimation;                         //@synthesize inAnimation=_inAnimation - In the implementation block
-(float)width;
-(float)height;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(void)setOffset:;
-()offset;
-(NSMutableArray *)texs;
-(void)setTexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blinkTexs;
-(void)setBlinkTexs:(NSMutableArray *)arg1 ;
-()bone;
-(void)setBone:;
-(float)curHeadTilt;
-(void)setCurHeadTilt:(float)arg1 ;
-(float)curHeadX;
-(void)setCurHeadX:(float)arg1 ;
-(int)inAnimation;
-(void)setInAnimation:(int)arg1 ;
@end


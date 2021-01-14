/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(float)arg1 ;
-(float)width;
-(NSMutableArray *)texs;
-()bone;
-(void)setWidth:(float)arg1 ;
-(float)height;
-()offset;
-(void)setOffset:;
-(void)setTexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blinkTexs;
-(void)setBlinkTexs:(NSMutableArray *)arg1 ;
-(void)setBone:;
-(float)curHeadTilt;
-(void)setCurHeadTilt:(float)arg1 ;
-(float)curHeadX;
-(void)setCurHeadX:(float)arg1 ;
-(int)inAnimation;
-(void)setInAnimation:(int)arg1 ;
@end


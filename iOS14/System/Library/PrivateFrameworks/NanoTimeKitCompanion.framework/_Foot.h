/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Foot : _Geometry {

	char _animFrame;
	char _frameDisplayTime60th;
	unsigned char _state;
	NSMutableArray* _texs;

}

@property (nonatomic,retain) NSMutableArray * texs;                  //@synthesize texs=_texs - In the implementation block
@property (assign,nonatomic) char animFrame;                         //@synthesize animFrame=_animFrame - In the implementation block
@property (assign,nonatomic) char frameDisplayTime60th;              //@synthesize frameDisplayTime60th=_frameDisplayTime60th - In the implementation block
@property (assign,nonatomic) unsigned char state;                    //@synthesize state=_state - In the implementation block
-(NSMutableArray *)texs;
-(void)setState:(unsigned char)arg1 ;
-(unsigned char)state;
-(void)setTexs:(NSMutableArray *)arg1 ;
-(char)frameDisplayTime60th;
-(void)setFrameDisplayTime60th:(char)arg1 ;
-(char)animFrame;
-(void)setAnimFrame:(char)arg1 ;
@end


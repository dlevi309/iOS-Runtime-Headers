/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class CLKUIQuadView;

@interface CLKUIQuad : NSObject {

	BOOL _opaque;
	CLKUIQuadView* _quadView;

}

@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                  //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic,__weak) CLKUIQuadView * quadView;              //@synthesize quadView=_quadView - In the implementation block
-(id)init;
-(BOOL)isOpaque;
-(void)purge;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setQuadView:(CLKUIQuadView *)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)unlinkQuadView;
-(void)encodeGLforSize:(CLKUIQuadSize)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(CLKUIQuadView *)quadView;
@end


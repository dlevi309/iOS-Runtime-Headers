/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(id)init;
-(void)purge;
-(CLKUIQuadView *)quadView;
-(void)setupForQuadView:(id)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)setQuadView:(CLKUIQuadView *)arg1 ;
-(void)unlinkQuadView;
-(void)encodeGLforSize:(CLKUIQuadSize)arg1 ;
@end


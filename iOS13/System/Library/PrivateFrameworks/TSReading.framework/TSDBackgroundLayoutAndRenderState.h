/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDBackgroundLayoutAndRenderStateDelegate;
@interface TSDBackgroundLayoutAndRenderState : NSObject {

	id<TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
	BOOL mNeedsLayoutAndRender;
	BOOL mNeedsLayoutForTilingLayers;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)clearDelegate;
-(void)setNeedsLayoutForTilingLayers;
-(void)p_didBackgroundLayoutAndRender;
-(void)setNeedsLayoutAndRender;
@end


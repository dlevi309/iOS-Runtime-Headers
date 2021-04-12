/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {

	NSMutableSet* mDirtyTilingLayers;
	TSDInteractiveCanvasController* mController;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)controller;
-(void)p_commonInit;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
@end


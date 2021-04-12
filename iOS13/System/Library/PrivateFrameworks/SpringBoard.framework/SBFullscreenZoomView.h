/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	BOOL _hasImage;
	id _surface;

}

@property (nonatomic,__weak,readonly) id surface; 
-(id)surface;
-(id)_initWithFrame:(CGRect)arg1 ;
-(void)_addBlackBackground;
-(id)_initWithView:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)initWithContainingBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 statusBarFrame:(CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 forJail:(BOOL)arg11 ;
-(id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3 ;
@end


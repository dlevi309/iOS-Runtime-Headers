/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSystemCursorInteractionDelegate <NSObject>
@optional
-(UIEdgeInsets*)cursorInteractionHitTestInsetsForView:(id)arg1;
-(id)regionAtLocation:(CGPoint)arg1 forView:(id)arg2;
-(id)styleForRegion:(id)arg1 forView:(id)arg2;

@required
-(BOOL)shouldBeginCursorInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2;

@end


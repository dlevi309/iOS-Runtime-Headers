/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class _UILegibilitySettings;


@protocol SBUILegibility <SBUIOptionalLegibility>
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@required
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1;
-(void)setStrength:(double)arg1;
-(double)strength;

@end


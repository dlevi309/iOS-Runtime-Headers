/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBCoplanarSwitcherModifier : SBSwitcherModifier {

	double _scale;
	long long _spacingType;
	SBAppLayout* _activeAppLayout;

}

@property (nonatomic,retain) SBAppLayout * activeAppLayout;              //@synthesize activeAppLayout=_activeAppLayout - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long spacingType;                      //@synthesize spacingType=_spacingType - In the implementation block
-(double)scale;
-(void)setScale:(double)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithActiveAppLayout:(id)arg1 ;
-(void)setSpacingType:(long long)arg1 ;
-(long long)_indexOfActiveAppLayout;
-(double)_offscreenSpacing;
-(long long)spacingType;
-(SBAppLayout *)activeAppLayout;
-(void)setActiveAppLayout:(SBAppLayout *)arg1 ;
@end


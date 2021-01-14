/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) double scale;                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long spacingType;              //@synthesize spacingType=_spacingType - In the implementation block
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(void)setSpacingType:(long long)arg1 ;
-(long long)_indexOfActiveAppLayout;
-(double)scale;
-(id)initWithActiveAppLayout:(id)arg1 ;
-(long long)spacingType;
-(void)setScale:(double)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)_offscreenSpacing;
@end


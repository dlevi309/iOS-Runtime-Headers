/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class SBFFluidBehaviorSettings;

@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying> {

	long long _updateMode;
	SBFFluidBehaviorSettings* _layoutSettings;
	SBFFluidBehaviorSettings* _positionSettings;
	SBFFluidBehaviorSettings* _scaleSettings;
	SBFFluidBehaviorSettings* _opacitySettings;
	SBFFluidBehaviorSettings* _cornerRadiusSettings;

}

@property (assign,nonatomic) long long updateMode;                                         //@synthesize updateMode=_updateMode - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * layoutSettings;                    //@synthesize layoutSettings=_layoutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * positionSettings;                  //@synthesize positionSettings=_positionSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * scaleSettings;                     //@synthesize scaleSettings=_scaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * opacitySettings;                   //@synthesize opacitySettings=_opacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * cornerRadiusSettings;              //@synthesize cornerRadiusSettings=_cornerRadiusSettings - In the implementation block
-(SBFFluidBehaviorSettings *)opacitySettings;
-(void)setScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)scaleSettings;
-(long long)updateMode;
-(void)setLayoutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(SBFFluidBehaviorSettings *)layoutSettings;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBFFluidBehaviorSettings *)positionSettings;
-(SBFFluidBehaviorSettings *)cornerRadiusSettings;
-(void)setUpdateMode:(long long)arg1 ;
-(void)setCornerRadiusSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setPositionSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end


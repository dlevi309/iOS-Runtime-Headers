/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HMCameraClip;

@interface HUClipSpacerCollectionViewCell : UICollectionViewCell {

	BOOL _spansMultipleDays;
	HMCameraClip* _clip;
	HMCameraClip* _previousClip;

}

@property (assign,nonatomic,__weak) HMCameraClip * clip;                      //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * previousClip;              //@synthesize previousClip=_previousClip - In the implementation block
@property (assign,nonatomic) BOOL spansMultipleDays;                          //@synthesize spansMultipleDays=_spansMultipleDays - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(HMCameraClip *)clip;
-(void)setClip:(HMCameraClip *)arg1 ;
-(void)setSpansMultipleDays:(BOOL)arg1 ;
-(void)updateWithClip:(id)arg1 previousClip:(id)arg2 ;
-(BOOL)spansMultipleDays;
-(HMCameraClip *)previousClip;
-(void)setPreviousClip:(HMCameraClip *)arg1 ;
@end


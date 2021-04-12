/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSHashTable, CABackdropLayer;

@interface AVCABackdropLayerView : UIView {

	BOOL _forceLowQualityEffect;
	UIColor* _customBackgroundColor;
	AVCABackdropLayerView* _groupLeader;
	NSHashTable* _dependents;
	long long _activeBackdropEffect;

}

@property (assign,nonatomic,__weak) AVCABackdropLayerView * groupLeader;              //@synthesize groupLeader=_groupLeader - In the implementation block
@property (nonatomic,readonly) NSHashTable * dependents;                              //@synthesize dependents=_dependents - In the implementation block
@property (assign,nonatomic) long long activeBackdropEffect;                          //@synthesize activeBackdropEffect=_activeBackdropEffect - In the implementation block
@property (nonatomic,readonly) CABackdropLayer * layer; 
@property (assign,getter=isCaptureOnly,nonatomic) BOOL captureOnly; 
@property (assign,nonatomic) BOOL forceLowQualityEffect;                              //@synthesize forceLowQualityEffect=_forceLowQualityEffect - In the implementation block
@property (nonatomic,copy) UIColor * customBackgroundColor;                           //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
+(id)colorMatrixFilter;
+(id)reducedTransparencyColor;
+(id)averageFilter;
+(Class)layerClass;
+(id)blurFilter;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(BOOL)isCaptureOnly;
-(UIColor *)customBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateFilters;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)updateGroupLeader;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(NSHashTable *)dependents;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(AVCABackdropLayerView *)groupLeader;
-(void)addDependent:(id)arg1 ;
-(void)didMoveToWindow;
-(BOOL)forceLowQualityEffect;
-(void)_ensureDependents;
-(void)_enumerateDependents:(/*^block*/id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(void)setForceLowQualityEffect:(BOOL)arg1 ;
-(void)updateActiveBackdropEffectIfGroupLeader;
-(void)setActiveBackdropEffect:(long long)arg1 ;
-(long long)activeBackdropEffect;
-(void)setGroupLeader:(AVCABackdropLayerView *)arg1 ;
@end


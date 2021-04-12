/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)layerClass;
+(id)reducedTransparencyColor;
+(id)averageFilter;
+(id)blurFilter;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)_updateFilters;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)updateActiveBackdropEffectIfGroupLeader;
-(BOOL)isCaptureOnly;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(void)setGroupLeader:(AVCABackdropLayerView *)arg1 ;
-(void)updateGroupLeader;
-(void)addDependent:(id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(void)_ensureDependents;
-(void)_enumerateDependents:(/*^block*/id)arg1 ;
-(BOOL)forceLowQualityEffect;
-(void)setForceLowQualityEffect:(BOOL)arg1 ;
-(UIColor *)customBackgroundColor;
-(AVCABackdropLayerView *)groupLeader;
-(NSHashTable *)dependents;
-(long long)activeBackdropEffect;
-(void)setActiveBackdropEffect:(long long)arg1 ;
@end


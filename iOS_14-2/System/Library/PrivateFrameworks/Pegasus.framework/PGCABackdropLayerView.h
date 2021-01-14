/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSHashTable, PGCABackdropLayer;

@interface PGCABackdropLayerView : UIView {

	UIColor* _customBackgroundColor;
	PGCABackdropLayerView* _groupLeader;
	NSHashTable* _dependents;

}

@property (nonatomic,readonly) PGCABackdropLayer * layer; 
@property (assign,nonatomic,__weak) PGCABackdropLayerView * groupLeader;              //@synthesize groupLeader=_groupLeader - In the implementation block
@property (nonatomic,readonly) NSHashTable * dependents;                              //@synthesize dependents=_dependents - In the implementation block
@property (nonatomic,copy) UIColor * customBackgroundColor;                           //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
+(id)reducedTransparencyColor;
+(Class)layerClass;
+(id)materialFilters;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)customBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_preferredBackgroundColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSHashTable *)dependents;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PGCABackdropLayerView *)groupLeader;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)_ensureDependents;
-(void)_enumerateDependents:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setGroupLeader:(PGCABackdropLayerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 captureOnly:(BOOL)arg2 ;
-(void)updateEffects;
-(long long)_preferredEffect;
-(BOOL)_isCaptureOnly;
-(BOOL)_hasAnyDependentsThatWantsCapturedBlur;
-(void)_removeDependent:(id)arg1 ;
-(void)_addDependent:(id)arg1 ;
-(BOOL)_wantsCapturedBlur;
-(BOOL)_isTransparentOrHasTransparentAncestor;
@end


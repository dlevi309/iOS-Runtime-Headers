/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface JTEffectFactory : NSObject
+(id)sharedInstance;
-(id)init;
-(id)filters;
-(id)overlays;
-(id)overlayEffect:(id)arg1 properties:(id)arg2 ;
-(id)animojis;
-(BOOL)isStyleTransferEffectID:(id)arg1 ;
-(id)_effectCategories:(int)arg1 ;
-(id)_effects:(int)arg1 category:(id)arg2 ;
-(id)_effects:(int)arg1 ;
-(id)_effectsIDsForType:(int)arg1 ;
-(id)_filterEffects;
-(id)_animojiEffects;
-(id)_liveTitleEffects;
-(id)_overlayEffects;
-(id)_titleCardEffects;
-(BOOL)CFX_isExpensiveEffectID:(id)arg1 ;
-(id)overlayCategories;
-(id)titleCardCategories;
-(id)propertiesForEffectID:(id)arg1 ;
-(id)overlays:(id)arg1 ;
-(id)styleTransferEffectIDs;
-(id)effectsForType:(int)arg1 ;
-(id)effectIDsForType:(int)arg1 ;
-(id)createEffectForType:(id)arg1 forType:(int)arg2 ;
-(id)animojiEffect:(id)arg1 properties:(id)arg2 ;
-(id)filterEffect:(id)arg1 properties:(id)arg2 ;
@end


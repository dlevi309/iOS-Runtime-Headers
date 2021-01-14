/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface JFXEffectFactory : NSObject
+(id)sharedInstance;
+(id)delegate;
+(void)setDelegate:(id)arg1 ;
-(id)createEffectForType:(int)arg1 fromID:(id)arg2 withProperties:(id)arg3 ;
-(void)effectCategoriesForType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isStyleTransferEffectID:(id)arg1 ;
-(id)styleTransferEffectIDs;
-(void)effectIDsForType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)effectsForType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)effectsForType:(int)arg1 fromCategory:(id)arg2 ;
-(id)createEffectContentDataSourceForEffectID:(id)arg1 ofType:(int)arg2 ;
@end


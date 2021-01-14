/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXEffectFactoryDelegate <NSObject>
@optional
-(void)effectFactory:(id)arg1 effectCategoriesAvailableForType:(int)arg2 completion:(/*^block*/id)arg3;
-(id)effectFactory:(id)arg1 createEffectContentDataSourceForEffectID:(id)arg2 ofType:(int)arg3;

@required
-(void)effectFactory:(id)arg1 effectIDsAvailableForType:(int)arg2 completion:(/*^block*/id)arg3;
-(id)styleTransferEffectIDsForFactory:(id)arg1;
-(BOOL)effectFactory:(id)arg1 isStyleTransferEffectID:(id)arg2;

@end


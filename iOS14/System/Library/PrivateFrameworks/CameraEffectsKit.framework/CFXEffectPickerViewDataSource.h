/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXEffectPickerViewDataSource <NSObject>
@required
-(unsigned long long)numberOfEffectsInPickerView:(id)arg1;
-(unsigned long long)effectPickerView:(id)arg1 indexForEffectID:(id)arg2;
-(id)effectPickerView:(id)arg1 effectTitleAtIndex:(long long)arg2;
-(id)effectPickerView:(id)arg1 effectIdentifierAtIndex:(long long)arg2;
-(void)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 forPreviewingAtSizeInPixels:(CGSize)arg3 completionBlock:(/*^block*/id)arg4;
-(void)effectPickerViewDidScroll:(id)arg1;

@end


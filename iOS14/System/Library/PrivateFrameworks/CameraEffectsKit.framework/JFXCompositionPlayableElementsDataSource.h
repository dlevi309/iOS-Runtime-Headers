/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXCompositionPlayableElementsDataSource <NSObject>
@optional
-(id)colorSpace;

@required
-(double)imageScale;
-(int)timeScale;
-(long long)count;
-(int)frameRate;
-(CGSize*)renderSize;
-(int)duration;
-(CGSize*)frameSize;
-(BOOL)isExporting;
-(BOOL)screenCanShow2160P;
-(BOOL)use2160Pcontent:(BOOL)arg1;
-(id)playableElementAtIndex:(long long)arg1;

@end


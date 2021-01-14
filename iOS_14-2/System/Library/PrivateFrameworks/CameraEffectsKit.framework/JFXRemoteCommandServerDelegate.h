/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXRemoteCommandServerDelegate
@optional
-(void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetMemojiCommandWithContentsOfFile:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveGetEffectsRequest:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveGetEffectsResponse:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveOpenProjectPicker:(long long)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveOpenProjectAtIndex:(long long)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveNewProject:(long long)arg2;
-(void)remoteCommandServer:(id)arg1 didReceivePlay:(long long)arg2;
-(void)remoteCommandServer:(id)arg1 didReceivePlayClipAtIndex:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveRecordWithDuration:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveExportProjectAtIndex:(long long)arg2 asMovie:(BOOL)arg3;
-(void)remoteCommandServer:(id)arg1 didReceiveExportResponse:(long long)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddPosterWithPosterIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddPosterWithPosterName:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddEffectWithEffectIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddEffectWithEffectName:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5;
-(void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithIdentifier:(id)arg2 offset:(CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5;
-(void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;

@end


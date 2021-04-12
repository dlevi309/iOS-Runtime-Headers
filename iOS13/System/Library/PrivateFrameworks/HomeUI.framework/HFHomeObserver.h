/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFHomeObserver <HMHomeDelegatePrivate>
@optional
-(void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willExecuteActionSets:(id)arg2;
-(void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
-(void)home:(id)arg1 didSelectRoom:(id)arg2;
-(void)homeDidUpdateWallpaper:(id)arg1;
-(void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
-(void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
*/


@protocol ACCMediaLibraryProviderDelegateProtocol <NSObject>
@required
-(void)mediaLibrary:(id)arg1 confirmPlaylistContentUpdate:(id)arg2 lastRevision:(id)arg3 accessory:(id)arg4;
-(void)mediaLibrary:(id)arg1 play:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 firstItemPersistentID:(unsigned long long)arg5 accessory:(id)arg6;
-(void)mediaLibrary:(id)arg1 stopUpdate:(id)arg2 accessory:(id)arg3;
-(void)mediaLibrary:(id)arg1 confirmUpdate:(id)arg2 lastRevision:(id)arg3 updateCount:(unsigned)arg4 accessory:(id)arg5;
-(void)mediaLibrary:(id)arg1 accessoryLeft:(id)arg2;
-(void)mediaLibrary:(id)arg1 startUpdate:(id)arg2 lastRevision:(id)arg3 requestedInfo:(id)arg4 accessory:(id)arg5;
-(void)mediaLibrary:(id)arg1 accessoryUpdate:(id)arg2 windowPerLibrary:(unsigned)arg3;
-(void)mediaLibrary:(id)arg1 stopAllUpdate:(id)arg2;
-(void)mediaLibrary:(id)arg1 playAllSongs:(id)arg2 firstItemPersistentID:(unsigned long long)arg3 accessory:(id)arg4;
-(void)mediaLibrary:(id)arg1 play:(id)arg2 itemList:(id)arg3 firstItemIndex:(unsigned long long)arg4 accessory:(id)arg5;
-(void)mediaLibrary:(id)arg1 playCurrentSelection:(id)arg2 accessory:(id)arg3;
-(void)mediaLibrary:(id)arg1 accessoryArrived:(id)arg2 windowPerLibrary:(unsigned)arg3;
-(void)mediaLibrary:(id)arg1 playAllSongs:(id)arg2 accessory:(id)arg3;
-(void)mediaLibrary:(id)arg1 play:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 firstItemIndex:(unsigned long long)arg5 accessory:(id)arg6;

@end

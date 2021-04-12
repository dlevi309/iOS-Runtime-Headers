/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
*/


@protocol ACCMediaLibraryProviderDelegateProtocol, OS_dispatch_queue, ACCMediaLibraryXPCServerProtocol;
@class NSXPCConnection, NSString, NSObject, NSMutableDictionary;

@interface ACCMediaLibraryProvider : NSObject {

	int _lastUpdateType;
	id<ACCMediaLibraryProviderDelegateProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	NSString* _providerUID;
	NSObject*<OS_dispatch_queue> _delegateQ;
	id<ACCMediaLibraryXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;
	NSMutableDictionary* _libraries;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (assign,nonatomic,__weak) id<ACCMediaLibraryProviderDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> delegateQ;                            //@synthesize delegateQ=_delegateQ - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                                       //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCMediaLibraryXPCServerProtocol> remoteObject;                        //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                                        //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * libraries;                                          //@synthesize libraries=_libraries - In the implementation block
@property (assign,nonatomic) int lastUpdateType;                                                       //@synthesize lastUpdateType=_lastUpdateType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                             //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSString * providerUID;                                                   //@synthesize providerUID=_providerUID - In the implementation block
-(void)dealloc;
-(id)description;
-(id<ACCMediaLibraryProviderDelegateProtocol>)delegate;
-(void)setDelegate:(id<ACCMediaLibraryProviderDelegateProtocol>)arg1 ;
-(id<ACCMediaLibraryXPCServerProtocol>)remoteObject;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMutableDictionary *)accessories;
-(void)setRemoteObject:(id<ACCMediaLibraryXPCServerProtocol>)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)connectToServer;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(NSMutableDictionary *)libraries;
-(void)notify:(id)arg1 stateChange:(int)arg2 enabled:(BOOL)arg3 ;
-(long long)update:(id)arg1 revision:(id)arg2 content:(id)arg3 accessory:(id)arg4 ;
-(void)resetUpdate:(id)arg1 accessory:(id)arg2 ;
-(void)accessoryMediaLibraryAttached:(id)arg1 windowPerLibrary:(unsigned)arg2 ;
-(void)accessoryMediaLibraryDetached:(id)arg1 ;
-(void)accessoryMediaLibraryUpdate:(id)arg1 windowPerLibrary:(unsigned)arg2 ;
-(void)startMediaLibraryUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 mediaItemProperties:(unsigned long long)arg4 playlistProperties:(unsigned long long)arg5 playlistContentStyle:(int)arg6 playlistContentProperties:(unsigned long long)arg7 reqOptions:(unsigned long long)arg8 ;
-(void)stopMediaLibraryUpdate:(id)arg1 library:(id)arg2 ;
-(void)stopAllMediaLibraryUpdate:(id)arg1 ;
-(void)confirmUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 updateCount:(unsigned)arg4 ;
-(void)confirmPlaylistContentUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 ;
-(void)playCurrentSelection:(id)arg1 library:(id)arg2 ;
-(void)playItems:(id)arg1 library:(id)arg2 itemList:(id)arg3 startIndex:(unsigned)arg4 ;
-(void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startItem:(unsigned long long)arg5 ;
-(void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startIndex:(unsigned)arg5 ;
-(void)playAllSongs:(id)arg1 library:(id)arg2 startItem:(unsigned long long)arg3 ;
-(void)accessoryMediaLibraryAllDetached;
-(void)_notifyRemoteOfAvailableLibraries;
-(NSObject*<OS_dispatch_queue>)delegateQ;
-(void)_checkPlaylistContentToSend:(id)arg1 accessory:(id)arg2 ;
-(void)flushUpdates:(id)arg1 accessory:(id)arg2 ;
-(long long)update:(id)arg1 revision:(id)arg2 persistentID:(unsigned long long)arg3 type:(int)arg4 updateInfo:(id)arg5 progress:(unsigned char)arg6 accessory:(id)arg7 ;
-(void)notifyAvailableLibraries:(id)arg1 ;
-(long long)update:(id)arg1 revision:(id)arg2 item:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5 ;
-(long long)update:(id)arg1 revision:(id)arg2 playlist:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5 ;
-(long long)update:(id)arg1 revision:(id)arg2 deleteItem:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5 ;
-(long long)update:(id)arg1 revision:(id)arg2 deletePlaylist:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5 ;
-(long long)update:(id)arg1 revision:(id)arg2 progress:(unsigned char)arg3 accessory:(id)arg4 ;
-(void)setDelegateQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLibraries:(NSMutableDictionary *)arg1 ;
-(int)lastUpdateType;
-(void)setLastUpdateType:(int)arg1 ;
@end


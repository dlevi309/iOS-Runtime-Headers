/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIKeyboardInputManagerLoaderSyncHelper, NSMutableDictionary, NSXPCConnection, TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerLoader : NSObject {

	TIKeyboardInputManagerLoaderSyncHelper* _helper;
	NSMutableDictionary* _availableInputManagers;
	NSMutableDictionary* _lastUsedDate;
	NSMutableDictionary* _activeInputManagers;
	NSXPCConnection* _interactingConnection;
	TIKeyboardInputManagerBase* _mostRecentlyRequested;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * mostRecentlyRequested;              //@synthesize mostRecentlyRequested=_mostRecentlyRequested - In the implementation block
@property (assign,nonatomic) NSXPCConnection * interactingConnection;                         //@synthesize interactingConnection=_interactingConnection - In the implementation block
+(id)sharedLoader;
-(id)init;
-(void)dealloc;
-(id)activeInputModeIdentifiers;
-(id)resourceInputModes;
-(void)startSyncHelper;
-(id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3 ;
-(void)cacheInputManager:(id)arg1 ;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
-(BOOL)hasActiveInputManagers;
-(BOOL)isActiveInputManager:(id)arg1 ;
-(void)jettisonAllActiveInputManagers;
-(void)registerMaintenanceActivity;
-(NSXPCConnection *)interactingConnection;
-(void)setInteractingConnection:(NSXPCConnection *)arg1 ;
-(TIKeyboardInputManagerBase *)mostRecentlyRequested;
-(void)setMostRecentlyRequested:(TIKeyboardInputManagerBase *)arg1 ;
@end


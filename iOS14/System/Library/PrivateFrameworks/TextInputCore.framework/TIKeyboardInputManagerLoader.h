/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInteractingConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)interactingConnection;
-(id)resourceInputModes;
-(void)cacheInputManager:(id)arg1 ;
-(BOOL)hasActiveInputManagers;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
-(void)jettisonAllActiveInputManagers;
-(void)registerMaintenanceActivity;
-(void)setMostRecentlyRequested:(TIKeyboardInputManagerBase *)arg1 ;
-(TIKeyboardInputManagerBase *)mostRecentlyRequested;
-(void)startSyncHelper;
-(id)activeInputModeIdentifiers;
-(BOOL)isActiveInputManager:(id)arg1 ;
-(id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3 ;
-(void)dealloc;
@end


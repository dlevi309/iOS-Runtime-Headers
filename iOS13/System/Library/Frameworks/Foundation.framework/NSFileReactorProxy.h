/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSXPCConnection, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSXPCConnection* _client;
	id _reactorID;
	NSFileAccessNode* _itemLocation;
	unsigned _effectiveUserIdentifier;

}

@property (assign) unsigned effectiveUserIdentifier; 
+(void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(id)itemLocation;
-(id)client;
-(id)reactorID;
-(unsigned)effectiveUserIdentifier;
-(void)setEffectiveUserIdentifier:(unsigned)arg1 ;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 ;
@end


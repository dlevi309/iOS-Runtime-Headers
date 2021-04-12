/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)effectiveUserIdentifier;
-(id)client;
-(void)forwardUsingProxy:(id)arg1 ;
-(id)reactorID;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(id)itemLocation;
-(BOOL)allowedForURL:(id)arg1 ;
-(id)description;
-(void)setEffectiveUserIdentifier:(unsigned)arg1 ;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 ;
-(void)invalidate;
-(id)_clientProxy;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end


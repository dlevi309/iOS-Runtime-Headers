/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class Protocol;

@interface NSXPCInterface : NSObject {

	Protocol* _protocol;
	void* _reserved2;
	id _reserved1;

}

@property (assign) Protocol * protocol; 
+(id)interfaceWithProtocol:(id)arg1 ;
+(id)signatureForBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Protocol *)protocol;
-(void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(unsigned long long)version;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)_methodSignatureForRemoteSelector:(SEL)arg1 ;
-(id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3 ;
-(Class)_returnClassForSelector:(SEL)arg1 ;
-(BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1 ;
-(Class)_customSubclass;
-(BOOL)_selectorIsAllowed:(SEL)arg1 isReply:(BOOL)arg2 methodSignature:(id*)arg3 allowedClasses:(id*)arg4 ;
-(unsigned long long)_remoteVersion;
-(void)setProtocol:(Protocol *)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1 ;
-(id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setXPCType:(xpc_type_sRef)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(const xpc_type_sRef)XPCTypeForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2 ;
-(id)replyBlockSignatureForSelector:(SEL)arg1 ;
-(void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2 ;
-(unsigned long long)versionForSelector:(SEL)arg1 ;
-(void)set_remoteVersion:(unsigned long long)arg1 ;
-(unsigned long long)_respondsToRemoteSelector:(SEL)arg1 ;
-(BOOL)_hasProxiesInArgumentsOfSelector:(SEL)arg1 ;
-(id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2 ;
@end


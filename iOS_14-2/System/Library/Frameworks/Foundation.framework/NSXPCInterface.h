/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(BOOL)_selectorIsAllowed:(SEL)arg1 isReply:(BOOL)arg2 methodSignature:(id*)arg3 allowedClasses:(id*)arg4 ;
-(id)init;
-(Protocol *)protocol;
-(id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1 ;
-(const xpc_type_sRef)XPCTypeForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1 ;
-(id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3 ;
-(void)setXPCType:(xpc_type_sRef)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)debugDescription;
-(void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2 ;
-(BOOL)_hasProxiesInArgumentsOfSelector:(SEL)arg1 ;
-(id)replyBlockSignatureForSelector:(SEL)arg1 ;
-(unsigned long long)_respondsToRemoteSelector:(SEL)arg1 ;
-(Class)_customSubclass;
-(Class)_returnClassForSelector:(SEL)arg1 ;
-(unsigned long long)_remoteVersion;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(unsigned long long)versionForSelector:(SEL)arg1 ;
-(void)set_remoteVersion:(unsigned long long)arg1 ;
-(void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2 ;
-(id)_methodSignatureForRemoteSelector:(SEL)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(unsigned long long)version;
-(void)dealloc;
@end


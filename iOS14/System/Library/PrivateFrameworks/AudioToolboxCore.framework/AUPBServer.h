/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AUPBServing.h>

@protocol AUPBRegistrarHosting;
@class NSXPCConnection, NSXPCListener, NSMutableArray, NSString;

@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing> {

	NSXPCConnection* mRegistrarConnection;
	id<AUPBRegistrarHosting> mProxyInterface;
	NSXPCListener* mListener;
	NSMutableArray* mClientConnections;
	unique_ptr<CADeprecated::CAMutex, std::__1::default_delete<CADeprecated::CAMutex> >* mLock;
	map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo> > >* mAUHandlesToInfo;
	map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock> > >* mBlockHandlesToMethods;
	unsigned mAUPBRefCounter;
	unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock> >* mTestBlock;
	unsigned mAUHandleCntr;
	int mNotifyToken;
	BOOL mValidToken;
	BOOL mConnectionAcknowledged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(int)unregisterBlock:(OpaqueAUPBRef)arg1 ;
-(id)init;
-(id)retain;
-(void)processingBlock:(OpaqueAUPBRef)arg1 properties:(const unsigned*)arg2 count:(unsigned)arg3 changedWithQualifierData:(void*)arg4 length:(unsigned)arg5 ;
-(id)autorelease;
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(int)registerAU:(OpaqueRemoteAudioUnitRef)arg1 inBlock:(OpaqueAUPBRef)arg2 ;
-(unsigned)handleFromAUPBRef:(OpaqueAUPBRef)arg1 ;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)startRegistrarConnection;
-(int)unregisterAU:(OpaqueRemoteAudioUnitRef)arg1 ;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6 ;
-(unsigned long long)retainCount;
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3 ;
-(unsigned)auHandleFromRef:(OpaqueRemoteAudioUnitRef)arg1 ;
-(void)blockListChanged;
-(void)checkConnectRegistrar;
-(AUProcessingBlock*)aupbFromRef:(OpaqueAUPBRef)arg1 ;
-(OpaqueAUPBRef)registerBlock:(const AUPBMethods*)arg1 withUserData:(void*)arg2 ;
-(OpaqueRemoteAudioUnitRef)auRefFromHandle:(unsigned)arg1 ;
-(void)processingBlockRef:(OpaqueAUPBRef)arg1 propertyChanged:(unsigned)arg2 ;
-(void)handleRegistrarCrash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AUProcessingBlock*)aupbFromAUHandle:(unsigned)arg1 ;
-(void)dealloc;
@end


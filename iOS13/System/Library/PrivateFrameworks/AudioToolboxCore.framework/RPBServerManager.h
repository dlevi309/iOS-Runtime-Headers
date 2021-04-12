/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RPBServing.h>

@protocol RemoteProcessingBlockRegistrarHosting;
@class NSXPCConnection, NSXPCListener, NSMutableArray, NSMapTable, NSString;

@interface RPBServerManager : NSObject <NSXPCListenerDelegate, RPBServing> {

	NSXPCConnection* mRegistrarConnection;
	id<RemoteProcessingBlockRegistrarHosting> mRegistrarProxyInterface;
	NSXPCListener* mListener;
	NSMutableArray* mClientConnections;
	AI mRPBIDCounter;
	NSMapTable* mIDToRPBHost;
	int mNotifyToken;
	BOOL mValidToken;
	BOOL mConnectionAcknowledged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)checkConnectRegistrar;
-(void)startRegistrarConnection;
-(void)getProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3 ;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 inData:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)getRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 property:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inReply:(/*^block*/id)arg6 ;
-(void)setRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 property:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inData:(id)arg6 withReply:(/*^block*/id)arg7 ;
-(void)getRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 parameter:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inReply:(/*^block*/id)arg6 ;
-(void)setRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 parameter:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 value:(float)arg6 withReply:(/*^block*/id)arg7 ;
-(int)registerRPB:(id)arg1 outRPBlockID:(unsigned*)arg2 ;
-(int)unregisterRPB:(unsigned)arg1 ;
-(int)propertyChangedOnRPB:(unsigned)arg1 inPropertyID:(unsigned)arg2 ;
-(int)propertyChangedOnRPB:(unsigned)arg1 itemID:(unsigned)arg2 inPropertyID:(unsigned)arg3 ;
-(int)parameterChangedOnRPB:(unsigned)arg1 itemID:(unsigned)arg2 inParameterID:(unsigned)arg3 inParameterValue:(float)arg4 ;
-(int)registerRPBItem:(unsigned*)arg1 inRPBlockID:(unsigned)arg2 ;
-(int)unregisterRPBItem:(unsigned)arg1 inRPBlockID:(unsigned)arg2 ;
-(int)propertiesChangedOnRPB:(unsigned)arg1 inPropertyIDs:(id)arg2 ;
@end


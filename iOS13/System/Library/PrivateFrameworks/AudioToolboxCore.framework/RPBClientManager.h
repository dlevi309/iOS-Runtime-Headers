/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/RemoteProcessingBlockRegistrarListening.h>
#import <libobjc.A.dylib/RPBInspecting.h>

@protocol RemoteProcessingBlockRegistrarHosting;
@class NSXPCConnection, NSMutableArray, NSHashTable, NSString;

@interface RPBClientManager : NSObject <RemoteProcessingBlockRegistrarListening, RPBInspecting> {

	NSXPCConnection* mRegistrarConnection;
	id<RemoteProcessingBlockRegistrarHosting> mProxyInterface;
	NSMutableArray* mRemoteServers;
	NSHashTable* mClients;
	NSMutableArray* mPropertyListeners;
	AI mRPBServerCounter;
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
-(int)addClient:(id)arg1 ;
-(int)removeClient:(id)arg1 ;
-(void)processingBlock:(unsigned)arg1 propertyChanged:(unsigned)arg2 ;
-(int)setProperty:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 inData:(id)arg4 ;
-(int)copyItemProperty:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 inItemID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 outData:(id*)arg7 ;
-(int)setItemProperty:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 inItemID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 inData:(id)arg7 ;
-(int)getItemParameter:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 inItemID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 outParameterValue:(float*)arg7 ;
-(int)setItemParameter:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 inItemID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 inParameterValue:(float)arg7 ;
-(int)addPropertyListener:(id)arg1 inPropertyID:(unsigned)arg2 inServerID:(unsigned)arg3 inRPBlockID:(unsigned)arg4 ;
-(int)removePropertyListener:(id)arg1 inPropertyID:(unsigned)arg2 inServerID:(unsigned)arg3 inRPBlockID:(unsigned)arg4 ;
-(int)copyProperty:(unsigned)arg1 inServerID:(unsigned)arg2 inRPBlockID:(unsigned)arg3 outData:(id*)arg4 ;
-(void)processingBlock:(unsigned)arg1 propertiesChanged:(id)arg2 ;
-(void)newServerAdded:(id)arg1 ;
-(void)startRegistarConnection;
-(id)serverFromServerID:(unsigned)arg1 ;
@end


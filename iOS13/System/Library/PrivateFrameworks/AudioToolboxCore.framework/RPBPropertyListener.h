/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol RemoteProcessingBlockPropertyListener;
@interface RPBPropertyListener : NSObject {

	unsigned _serverID;
	unsigned _blockID;
	unsigned _propertyID;
	id<RemoteProcessingBlockPropertyListener> _listener;

}

@property (assign) unsigned serverID;                                               //@synthesize serverID=_serverID - In the implementation block
@property (assign) unsigned blockID;                                                //@synthesize blockID=_blockID - In the implementation block
@property (assign) unsigned propertyID;                                             //@synthesize propertyID=_propertyID - In the implementation block
@property (__weak) id<RemoteProcessingBlockPropertyListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id<RemoteProcessingBlockPropertyListener>)listener;
-(void)setListener:(id<RemoteProcessingBlockPropertyListener>)arg1 ;
-(unsigned)serverID;
-(void)setServerID:(unsigned)arg1 ;
-(unsigned)blockID;
-(void)setBlockID:(unsigned)arg1 ;
-(unsigned)propertyID;
-(void)setPropertyID:(unsigned)arg1 ;
@end


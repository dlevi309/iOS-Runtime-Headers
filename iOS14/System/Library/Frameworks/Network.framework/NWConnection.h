/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSError, NWPath, NWConcrete_nw_connection, NWEndpoint, NWParameters;

@interface NWConnection : NSObject {

	BOOL _internalIsViable;
	BOOL _internalHasBetterPath;
	long long _internalConnectionState;
	NSError* _internalError;
	NWPath* _internalPath;
	NWConcrete_nw_connection* _internalConnection;

}

@property (assign) long long internalConnectionState;                                    //@synthesize internalConnectionState=_internalConnectionState - In the implementation block
@property (assign) BOOL internalIsViable;                                                //@synthesize internalIsViable=_internalIsViable - In the implementation block
@property (assign) BOOL internalHasBetterPath;                                           //@synthesize internalHasBetterPath=_internalHasBetterPath - In the implementation block
@property (retain) NSError * internalError;                                              //@synthesize internalError=_internalError - In the implementation block
@property (retain) NWPath * internalPath;                                                //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned tlsConnectionTime; 
@property (nonatomic,retain) NWConcrete_nw_connection * internalConnection;              //@synthesize internalConnection=_internalConnection - In the implementation block
@property (nonatomic,readonly) NWPath * currentPath; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NWEndpoint * connectedLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * connectedRemoteEndpoint; 
@property (nonatomic,readonly) NSError * error; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) BOOL hasBetterPath; 
+(id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2 ;
+(id)connectionWithConnectedSocket:(int)arg1 ;
+(id)connectionWithInternalConnection:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NWParameters *)parameters;
-(long long)connectionState;
-(void)setInternalConnection:(NWConcrete_nw_connection *)arg1 ;
-(void)start;
-(id)copyError;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NWPath *)currentPath;
-(NWEndpoint *)endpoint;
-(void)forceCancel;
-(NSError *)error;
-(id)initWithInternalConnection:(id)arg1 ;
-(id)initWithConnectedSocket:(int)arg1 ;
-(int)getConnectedSocket;
-(void)cancelCurrentEndpoint;
-(unsigned)tlsConnectionTime;
-(NWEndpoint *)connectedLocalEndpoint;
-(NWEndpoint *)connectedRemoteEndpoint;
-(id)copyCurrentPath;
-(long long)internalConnectionState;
-(void)setInternalConnectionState:(long long)arg1 ;
-(BOOL)internalIsViable;
-(void)setInternalIsViable:(BOOL)arg1 ;
-(BOOL)internalHasBetterPath;
-(void)setInternalHasBetterPath:(BOOL)arg1 ;
-(void)setInternalPath:(NWPath *)arg1 ;
-(BOOL)isViable;
-(id)description;
-(NWPath *)internalPath;
-(NSError *)internalError;
-(void)cancel;
-(BOOL)hasBetterPath;
-(void)setInternalError:(NSError *)arg1 ;
-(NWConcrete_nw_connection *)internalConnection;
@end


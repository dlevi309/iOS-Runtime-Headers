/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/


@protocol PSYConnectionDelegate;
@class PSYOptions, NSXPCConnection;

@interface PSYConnection : NSObject {

	BOOL _valid;
	id<PSYConnectionDelegate> _delegate;
	PSYOptions* _options;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) PSYOptions * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<PSYConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(id)init;
-(id<PSYConnectionDelegate>)delegate;
-(void)startSync;
-(PSYOptions *)options;
-(void)setOptions:(PSYOptions *)arg1 ;
-(void)setDelegate:(id<PSYConnectionDelegate>)arg1 ;
-(BOOL)isValid;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)remoteConnection;
-(void)startSyncWithOptions:(id)arg1 ;
@end


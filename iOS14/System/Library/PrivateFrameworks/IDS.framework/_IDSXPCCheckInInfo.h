/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSXPCConnectionProtocol, OS_xpc_object;
@class NSObject;

@interface _IDSXPCCheckInInfo : NSObject {

	BOOL _finishedTransaction;
	id<IDSXPCConnectionProtocol> _connection;
	NSObject*<OS_xpc_object> _tempObject;

}

@property (nonatomic,retain) id<IDSXPCConnectionProtocol> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> tempObject;                  //@synthesize tempObject=_tempObject - In the implementation block
@property (assign,nonatomic) BOOL finishedTransaction;                             //@synthesize finishedTransaction=_finishedTransaction - In the implementation block
-(BOOL)finishedTransaction;
-(void)setTempObject:(NSObject*<OS_xpc_object>)arg1 ;
-(id<IDSXPCConnectionProtocol>)connection;
-(void)setFinishedTransaction:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)tempObject;
-(void)setConnection:(id<IDSXPCConnectionProtocol>)arg1 ;
@end


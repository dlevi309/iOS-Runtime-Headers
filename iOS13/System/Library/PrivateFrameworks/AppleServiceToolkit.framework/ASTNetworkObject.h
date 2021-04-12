/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@protocol ASTConnection;
@class NSMutableData;

@interface ASTNetworkObject : NSObject {

	id<ASTConnection> _connection;
	NSMutableData* _receivedData;

}

@property (nonatomic,retain) id<ASTConnection> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
-(id<ASTConnection>)connection;
-(void)setConnection:(id<ASTConnection>)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end


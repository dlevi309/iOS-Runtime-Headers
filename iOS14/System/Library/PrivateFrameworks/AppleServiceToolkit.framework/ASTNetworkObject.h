/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(id<ASTConnection>)connection;
-(void)setConnection:(id<ASTConnection>)arg1 ;
@end


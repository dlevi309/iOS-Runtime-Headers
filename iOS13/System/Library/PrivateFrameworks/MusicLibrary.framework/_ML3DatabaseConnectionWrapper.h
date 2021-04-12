/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject {

	ML3DatabaseConnection* _connection;
	NSThread* _owningThread;
	NSThread* _borrowingThread;
	unsigned long long _useCount;

}

@property (nonatomic,retain) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSThread * owningThread;                         //@synthesize owningThread=_owningThread - In the implementation block
@property (nonatomic,retain) NSThread * borrowingThread;                      //@synthesize borrowingThread=_borrowingThread - In the implementation block
@property (assign,nonatomic) unsigned long long useCount;                     //@synthesize useCount=_useCount - In the implementation block
-(id)description;
-(ML3DatabaseConnection *)connection;
-(void)setConnection:(ML3DatabaseConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(unsigned long long)useCount;
-(void)setUseCount:(unsigned long long)arg1 ;
-(NSThread *)owningThread;
-(void)setOwningThread:(NSThread *)arg1 ;
-(NSThread *)borrowingThread;
-(void)setBorrowingThread:(NSThread *)arg1 ;
@end


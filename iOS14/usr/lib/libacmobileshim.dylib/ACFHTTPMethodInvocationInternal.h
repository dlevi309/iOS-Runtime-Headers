/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSRecursiveLock, NSMutableDictionary, NSURLConnection, NSMutableData;

@interface ACFHTTPMethodInvocationInternal : NSObject {

	NSRecursiveLock* _invocationGuard;
	NSRecursiveLock* _schedulingGuard;
	NSMutableDictionary* _runLoops;
	NSURLConnection* _connection;
	BOOL _isFinished;
	NSMutableData* _receivedDataAccumulator;

}

@property (retain) NSRecursiveLock * invocationGuard;                    //@synthesize invocationGuard=_invocationGuard - In the implementation block
@property (retain) NSRecursiveLock * schedulingGuard;                    //@synthesize schedulingGuard=_schedulingGuard - In the implementation block
@property (retain) NSMutableDictionary * runLoops;                       //@synthesize runLoops=_runLoops - In the implementation block
@property (retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSMutableData * receivedDataAccumulator;              //@synthesize receivedDataAccumulator=_receivedDataAccumulator - In the implementation block
-(id)init;
-(BOOL)isFinished;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)dealloc;
-(NSRecursiveLock *)invocationGuard;
-(NSMutableDictionary *)runLoops;
-(void)setReceivedDataAccumulator:(NSMutableData *)arg1 ;
-(NSRecursiveLock *)schedulingGuard;
-(NSMutableData *)receivedDataAccumulator;
-(void)setInvocationGuard:(NSRecursiveLock *)arg1 ;
-(void)setSchedulingGuard:(NSRecursiveLock *)arg1 ;
-(void)setRunLoops:(NSMutableDictionary *)arg1 ;
@end


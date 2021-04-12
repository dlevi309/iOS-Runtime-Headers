/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/FAFamilyCircleRequestConnectionProvider.h>

@protocol FAFamilyCircleRequestConnectionFactory;
@class NSXPCConnection, NSLock, NSString;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider> {

	id<FAFamilyCircleRequestConnectionFactory> _factory;
	NSXPCConnection* _connection;
	NSLock* _lock;

}

@property (nonatomic,retain) id<FAFamilyCircleRequestConnectionFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSLock * lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSLock *)lock;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id<FAFamilyCircleRequestConnectionFactory>)factory;
-(void)setFactory:(id<FAFamilyCircleRequestConnectionFactory>)arg1 ;
-(id)serviceConnection;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connectionWasInvalidated:(id)arg1 ;
-(id)initWithConnectionFactory:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connectionWasInterrupted:(id)arg1 ;
-(id)init;
-(NSLock *)lock;
-(id<FAFamilyCircleRequestConnectionFactory>)factory;
-(id)initWithConnectionFactory:(id)arg1 ;
-(NSXPCConnection *)connection;
-(id)serviceConnection;
-(void)setFactory:(id<FAFamilyCircleRequestConnectionFactory>)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connectionWasInvalidated:(id)arg1 ;
-(void)dealloc;
@end


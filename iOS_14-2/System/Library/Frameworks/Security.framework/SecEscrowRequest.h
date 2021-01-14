/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/SecEscrowRequestable.h>

@class NSXPCConnection, NSString;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable> {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)request:(id*)arg1 ;
-(id)fetchStatuses:(id*)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)resetAllRequests:(id*)arg1 ;
-(id)fetchRequestWaitingOnPasscode:(id*)arg1 ;
-(unsigned long long)storePrerecordsInEscrow:(id*)arg1 ;
-(BOOL)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id*)arg3 ;
-(BOOL)triggerEscrowUpdate:(id)arg1 error:(id*)arg2 ;
-(BOOL)pendingEscrowUpload:(id*)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)fetchPrerecord:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end


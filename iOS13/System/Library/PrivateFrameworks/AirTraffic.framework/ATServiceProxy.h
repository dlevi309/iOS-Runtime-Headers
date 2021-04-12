/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/ATService.h>
#import <libobjc.A.dylib/ATServiceObserver.h>

@class NSXPCConnection, NSString;

@interface ATServiceProxy : ATService <ATServiceObserver> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
-(id)messageLinks;
@end


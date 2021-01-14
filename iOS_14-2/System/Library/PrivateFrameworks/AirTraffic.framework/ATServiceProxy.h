/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
-(id)messageLinks;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end


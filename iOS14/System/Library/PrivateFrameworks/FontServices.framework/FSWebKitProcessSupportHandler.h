/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/

#import <FontServices/FontServicesWebKitSupportHostProtocol.h>

@class NSXPCConnection;

@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)ping:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)checkin:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@class NSXPCConnection, NSXPCListenerEndpoint;

@interface FontPickerSupporter : NSObject {

	BOOL _clientHasFontAccessEntitlement;
	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _clientEndpoint;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain,readonly) NSXPCListenerEndpoint * clientEndpoint;              //@synthesize clientEndpoint=_clientEndpoint - In the implementation block
@property (assign,nonatomic) BOOL clientHasFontAccessEntitlement;                          //@synthesize clientHasFontAccessEntitlement=_clientHasFontAccessEntitlement - In the implementation block
-(id)initWithEndpoint:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)done;
-(void)setup;
-(void)makeConnection;
-(BOOL)clientHasFontAccessEntitlement;
-(id)locallyActivatedFontFilePaths;
-(NSXPCListenerEndpoint *)clientEndpoint;
-(void)setClientHasFontAccessEntitlement:(BOOL)arg1 ;
@end


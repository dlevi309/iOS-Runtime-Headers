/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/


@class NSXPCConnection, NSHashTable;

@interface NFHardwareManagerXPC : NSObject {

	NSXPCConnection* _xpcConnection;
	NSHashTable* _delegates;
	long long _clientCount;

}

@property (readonly) NSXPCConnection * connection; 
+(id)sharedXPC;
-(void)addDelegate:(id)arg1 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)invalidate;
@end


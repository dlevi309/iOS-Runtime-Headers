/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol AUPBInspecting;
@class NSXPCConnection;

@interface AUPBClientConnection : NSObject {

	NSXPCConnection* xpcconnection;
	id<AUPBInspecting> proxyInterface;

}

@property (nonatomic,retain) NSXPCConnection * xpcconnection; 
@property (nonatomic,retain) id<AUPBInspecting> proxyInterface; 
-(NSXPCConnection *)xpcconnection;
-(id<AUPBInspecting>)proxyInterface;
-(void)setXpcconnection:(NSXPCConnection *)arg1 ;
-(void)setProxyInterface:(id<AUPBInspecting>)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


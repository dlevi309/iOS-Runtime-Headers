/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding> {

	NSString* _clientID;
	NSXPCConnection* _endpoint;

}

@property (nonatomic,copy) NSString * clientID;                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
@end


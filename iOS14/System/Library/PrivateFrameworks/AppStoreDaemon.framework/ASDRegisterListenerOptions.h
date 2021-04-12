/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(id)initWithCoder:(id)arg1 ;
@end


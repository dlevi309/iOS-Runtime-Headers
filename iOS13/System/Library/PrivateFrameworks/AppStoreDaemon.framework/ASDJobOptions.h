/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, ASDJobManifest;

@interface ASDJobOptions : NSObject <NSSecureCoding> {

	NSXPCConnection* _endpoint;
	ASDJobManifest* _manifest;

}

@property (nonatomic,retain) NSXPCConnection * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) ASDJobManifest * manifest;               //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(ASDJobManifest *)manifest;
-(void)setManifest:(ASDJobManifest *)arg1 ;
@end


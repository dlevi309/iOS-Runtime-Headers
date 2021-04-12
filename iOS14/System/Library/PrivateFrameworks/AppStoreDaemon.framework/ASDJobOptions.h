/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(ASDJobManifest *)manifest;
-(id)initWithCoder:(id)arg1 ;
-(void)setManifest:(ASDJobManifest *)arg1 ;
@end


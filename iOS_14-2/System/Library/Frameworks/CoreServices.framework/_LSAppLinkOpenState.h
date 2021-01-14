/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, _LSOpenConfiguration, NSXPCConnection, NSDictionary;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _URL;
	NSString* _bundleIdentifier;
	_LSOpenConfiguration* _openConfiguration;
	NSXPCConnection* _XPCConnection;
	NSDictionary* _browserState;

}

@property (copy) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) _LSOpenConfiguration * openConfiguration;              //@synthesize openConfiguration=_openConfiguration - In the implementation block
@property (readonly) const SCD_Struct_LS15* auditToken; 
@property (retain) NSXPCConnection * XPCConnection;                       //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (copy) NSDictionary * browserState;                             //@synthesize browserState=_browserState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSXPCConnection *)XPCConnection;
-(NSDictionary *)browserState;
-(_LSOpenConfiguration *)openConfiguration;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setOpenConfiguration:(_LSOpenConfiguration *)arg1 ;
-(void)setBrowserState:(NSDictionary *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(const SCD_Struct_LS15*)auditToken;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


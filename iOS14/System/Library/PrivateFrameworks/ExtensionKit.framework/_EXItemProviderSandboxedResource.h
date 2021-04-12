/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/

#import <ExtensionKit/ExtensionKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSData;

@interface _EXItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessingSecurityScopedResource;
	NSURL* _resourceURL;
	NSData* _sandboxExtensionToken;

}

@property (nonatomic,copy) NSData * sandboxExtensionToken;                                                               //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (nonatomic,copy) NSURL * resourceURL;                                                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (assign,getter=isAccessingSecurityScopedResource,nonatomic) BOOL accessingSecurityScopedResource;              //@synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithContentsOfURL:(id)arg1 auditToken:(SCD_Struct_EX1)arg2 error:(id*)arg3 ;
-(NSData *)sandboxExtensionToken;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setSandboxExtensionToken:(NSData *)arg1 ;
-(BOOL)isAccessingSecurityScopedResource;
-(void)setAccessingSecurityScopedResource:(BOOL)arg1 ;
-(id)resolveURLAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSData;

@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessingSecurityScopedResource;
	NSURL* _resourceURL;
	NSData* _sandboxExtensionToken;

}

@property (nonatomic,copy) NSData * sandboxExtensionToken;                                                               //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (nonatomic,copy) NSURL * resourceURL;                                                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (assign,getter=isAccessingSecurityScopedResource,nonatomic) BOOL accessingSecurityScopedResource;              //@synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
-(id)initWithContentsOfURL:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 error:(id*)arg3 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setSandboxExtensionToken:(NSData *)arg1 ;
-(BOOL)isAccessingSecurityScopedResource;
-(void)setAccessingSecurityScopedResource:(BOOL)arg1 ;
-(NSData *)sandboxExtensionToken;
-(id)resolveURLAndReturnError:(id*)arg1 ;
@end


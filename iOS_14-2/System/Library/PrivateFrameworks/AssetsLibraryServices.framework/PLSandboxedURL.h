/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSURL.h>

@class NSString;

@interface PLSandboxedURL : NSURL {

	NSString* _sandboxExtensionToken;
	long long _sandboxExtensionHandle;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_commonPLSandboxedURLInitialize;
-(void)_initSandboxExtensionToken:(id)arg1 consume:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initFileURLWithPath:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(BOOL)arg3 ;
-(void)dealloc;
@end


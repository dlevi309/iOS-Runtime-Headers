/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(BOOL)arg3 ;
-(void)_commonPLSandboxedURLInitialize;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface DCSandboxExtension : NSObject <NSSecureCoding> {

	BOOL _canAccessFileURL;
	BOOL _shouldIssueSandboxExtensionWhenEncoding;
	NSURL* _fileURL;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,readonly) BOOL shouldIssueSandboxExtensionWhenEncoding;              //@synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;                            //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL canAccessFileURL;                                     //@synthesize canAccessFileURL=_canAccessFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)relinquish;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sandboxExtensionHandle;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldIssueSandboxExtensionWhenEncoding;
-(BOOL)canAccessFileURL;
@end


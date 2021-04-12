/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(void)relinquish;
-(id)initWithFileURL:(id)arg1 ;
-(long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(BOOL)shouldIssueSandboxExtensionWhenEncoding;
-(BOOL)canAccessFileURL;
@end


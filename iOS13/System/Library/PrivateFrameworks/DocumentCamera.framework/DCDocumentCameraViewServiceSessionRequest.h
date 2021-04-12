/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DCSandboxExtension;

@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding> {

	NSString* _appName;
	DCSandboxExtension* _cachesDirectorySandboxExtension;

}

@property (nonatomic,readonly) NSString * appName;                                                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) DCSandboxExtension * cachesDirectorySandboxExtension;              //@synthesize cachesDirectorySandboxExtension=_cachesDirectorySandboxExtension - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(DCSandboxExtension *)cachesDirectorySandboxExtension;
@end


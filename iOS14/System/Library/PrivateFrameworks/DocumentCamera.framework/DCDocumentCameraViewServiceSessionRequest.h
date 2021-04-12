/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


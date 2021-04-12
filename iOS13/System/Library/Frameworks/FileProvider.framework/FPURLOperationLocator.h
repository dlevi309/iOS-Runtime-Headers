/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPURLOperationLocator : FPActionOperationLocator {

	BOOL _attachSandboxExtensionOnXPCEncoding;
	long long _size;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(unsigned long long)size;
-(id)filename;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(id)parentIdentifier;
-(BOOL)isExternalURL;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
@end


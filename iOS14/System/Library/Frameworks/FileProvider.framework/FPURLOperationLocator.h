/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPURLOperationLocator : FPActionOperationLocator {

	BOOL _attachSandboxExtensionOnXPCEncoding;
	long long _size;

}
+(BOOL)supportsSecureCoding;
-(id)initWithObject:(id)arg1 ;
-(BOOL)isDownloaded;
-(unsigned long long)size;
-(id)filename;
-(id)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isExternalURL;
-(BOOL)isFolder;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
@end


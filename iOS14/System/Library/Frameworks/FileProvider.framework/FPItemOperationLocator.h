/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPItemOperationLocator : FPActionOperationLocator
+(BOOL)supportsSecureCoding;
-(BOOL)isDownloaded;
-(unsigned long long)size;
-(id)filename;
-(id)parentIdentifier;
-(id)description;
-(BOOL)isProviderItem;
-(BOOL)isFolder;
-(BOOL)requiresCrossDeviceCopy;
-(BOOL)isMaterializedOnDisk;
-(id)identifier;
@end


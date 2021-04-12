/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPItemOperationLocator : FPActionOperationLocator
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)identifier;
-(unsigned long long)size;
-(id)filename;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(id)parentIdentifier;
-(BOOL)isProviderItem;
-(BOOL)requiresCrossDeviceCopy;
-(BOOL)isMaterializedOnDisk;
@end


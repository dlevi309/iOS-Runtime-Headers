/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNFileServices;
@interface CNFileUtilities : NSObject {

	id<CNFileServices> _services;

}
+(id)sharedInstance;
+(id)os_log;
+(id)initializeFileLock;
+(id)sharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)fileLock;
-(id)init;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNFileServices;
@interface CNFileUtilities : NSObject {

	id<CNFileServices> _services;

}
+(id)sharedInstance;
+(id)fileLock;
+(id)initializeFileLock;
+(id)sharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)os_log;
-(id)init;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
@end


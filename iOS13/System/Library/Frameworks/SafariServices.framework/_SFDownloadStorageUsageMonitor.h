/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFDownloadFileDelegate.h>
#import <libobjc.A.dylib/SFDownloadStorageUsageMonitorEntryDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, SFDownloadFile, NSObject;

@interface _SFDownloadStorageUsageMonitor : NSObject <SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate> {

	NSMutableDictionary* _entries;
	SFDownloadFile* _historyFile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) long long usage; 
-(id)init;
-(long long)usage;
-(void)entryDidChangeUsage:(id)arg1 ;
-(void)_reloadDownloadHistory;
-(void)downloadFileContentsDidChange:(id)arg1 ;
-(void)downloadFileWillBeDeleted:(id)arg1 ;
-(void)downloadFileDidChangeURL:(id)arg1 ;
@end


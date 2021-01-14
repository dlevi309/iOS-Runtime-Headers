/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)usage;
-(id)init;
-(void)entryDidChangeUsage:(id)arg1 ;
-(void)_reloadDownloadHistory;
-(void)downloadFileContentsDidChange:(id)arg1 ;
-(void)downloadFileWillBeDeleted:(id)arg1 ;
-(void)downloadFileDidChangeURL:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPreorderManagerObserver.h>

@class SUClientInterface, SUDownloadManager, SSPreorderManager, NSString, NSArray;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {

	SUClientInterface* _clientInterface;
	SUDownloadManager* _downloadManager;
	SSPreorderManager* _preorderManager;
	NSString* _queueType;

}

@property (readonly) NSArray * downloads; 
@property (readonly) NSString * queueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)attributeKeys;
-(NSString *)queueType;
-(void)finalizeForWebScript;
-(NSArray *)downloads;
-(void)preorderManagerPreordersDidChange:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2 ;
-(void)_tearDownQueues;
-(void)checkQueue;
-(id)initWithQueueType:(id)arg1 clientInterface:(id)arg2 ;
@end


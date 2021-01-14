/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {

	BRCAccountSession* _session;
	NSMutableDictionary* _trackersByDocID;
	NSMapTable* _docIDsByTracker;

}
-(id)initWithSession:(id)arg1 ;
-(void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2 ;
-(void)removeDownloadTracker:(id)arg1 ;
-(void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2 ;
-(unsigned long long)spaceRequiredForTrackers;
-(BOOL)hasPendingTrackerForDocumentID:(id)arg1 ;
@end


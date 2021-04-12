/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <StorageSettings/STStoragePlugin.h>
#import <libobjc.A.dylib/STStorageOptionTipDelegate.h>

@class STStorageOptionTip, STStorageActionTip, NSDate, NSArray, NSDictionary, IMCloudKitHooks, NSString;

@interface CKStoragePlugin : STStoragePlugin <STStorageOptionTipDelegate> {

	BOOL _cachedAttachmentsTakeUpSignificantSpace;
	STStorageOptionTip* _cachedAutoDeleteMessagesTip;
	unsigned long long _cachedSpaceSavedByAutoDeletingMessages;
	double _lastQuerySpaceSavedByAutoDeletingMessagesTime;
	STStorageActionTip* _cachedReviewLargeConversationsTip;
	unsigned long long _cachedSpaceSavedByReviewingLargeConversations;
	double _lastQuerySpaceSavedByReviewingLargeConversationsTime;
	STStorageActionTip* _cachedReviewLargeAttachmentsTip;
	NSDate* _cachedAttachmentsTakeUpSignificantSpaceDate;
	STStorageOptionTip* _cachedMessagesOniCloudTip;
	unsigned long long _cachedSpaceSavedByDeletingNonSyncedAttachments;
	double _lastQuerySpaceSavedByNonSyncedDeletingAttachments;
	NSArray* _appSpecifiers;
	NSArray* _cloudAppSpecifiers;
	NSDictionary* _spaceTakenByAttachmentClass;
	IMCloudKitHooks* _cloudKitHooks;

}

@property (nonatomic,retain) STStorageOptionTip * cachedAutoDeleteMessagesTip;                               //@synthesize cachedAutoDeleteMessagesTip=_cachedAutoDeleteMessagesTip - In the implementation block
@property (assign,nonatomic) unsigned long long cachedSpaceSavedByAutoDeletingMessages;                      //@synthesize cachedSpaceSavedByAutoDeletingMessages=_cachedSpaceSavedByAutoDeletingMessages - In the implementation block
@property (assign,nonatomic) double lastQuerySpaceSavedByAutoDeletingMessagesTime;                           //@synthesize lastQuerySpaceSavedByAutoDeletingMessagesTime=_lastQuerySpaceSavedByAutoDeletingMessagesTime - In the implementation block
@property (nonatomic,retain) STStorageActionTip * cachedReviewLargeConversationsTip;                         //@synthesize cachedReviewLargeConversationsTip=_cachedReviewLargeConversationsTip - In the implementation block
@property (assign,nonatomic) unsigned long long cachedSpaceSavedByReviewingLargeConversations;               //@synthesize cachedSpaceSavedByReviewingLargeConversations=_cachedSpaceSavedByReviewingLargeConversations - In the implementation block
@property (assign,nonatomic) double lastQuerySpaceSavedByReviewingLargeConversationsTime;                    //@synthesize lastQuerySpaceSavedByReviewingLargeConversationsTime=_lastQuerySpaceSavedByReviewingLargeConversationsTime - In the implementation block
@property (nonatomic,retain) STStorageActionTip * cachedReviewLargeAttachmentsTip;                           //@synthesize cachedReviewLargeAttachmentsTip=_cachedReviewLargeAttachmentsTip - In the implementation block
@property (assign,nonatomic) BOOL cachedAttachmentsTakeUpSignificantSpace;                                   //@synthesize cachedAttachmentsTakeUpSignificantSpace=_cachedAttachmentsTakeUpSignificantSpace - In the implementation block
@property (nonatomic,retain) NSDate * cachedAttachmentsTakeUpSignificantSpaceDate;                           //@synthesize cachedAttachmentsTakeUpSignificantSpaceDate=_cachedAttachmentsTakeUpSignificantSpaceDate - In the implementation block
@property (nonatomic,retain) STStorageOptionTip * cachedMessagesOniCloudTip;                                 //@synthesize cachedMessagesOniCloudTip=_cachedMessagesOniCloudTip - In the implementation block
@property (assign,nonatomic) unsigned long long cachedSpaceSavedByDeletingNonSyncedAttachments;              //@synthesize cachedSpaceSavedByDeletingNonSyncedAttachments=_cachedSpaceSavedByDeletingNonSyncedAttachments - In the implementation block
@property (assign,nonatomic) double lastQuerySpaceSavedByNonSyncedDeletingAttachments;                       //@synthesize lastQuerySpaceSavedByNonSyncedDeletingAttachments=_lastQuerySpaceSavedByNonSyncedDeletingAttachments - In the implementation block
@property (nonatomic,retain) NSArray * appSpecifiers;                                                        //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * cloudAppSpecifiers;                                                   //@synthesize cloudAppSpecifiers=_cloudAppSpecifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * spaceTakenByAttachmentClass;                                     //@synthesize spaceTakenByAttachmentClass=_spaceTakenByAttachmentClass - In the implementation block
@property (nonatomic,retain) IMCloudKitHooks * cloudKitHooks;                                                //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_representedApp;
-(id)init;
-(void)dealloc;
-(void)_loadTips;
-(void)_iCloudHooksSetEnabledReturned:(id)arg1 ;
-(void)_iCloudHooksValuesChanged:(id)arg1 ;
-(void)_loadAppSpecifiers;
-(NSArray *)appSpecifiers;
-(void)_loadiCloudAppSpecifiers;
-(NSArray *)cloudAppSpecifiers;
-(BOOL)_cloudKitEnabled;
-(unsigned long long)messageDatabaseSize;
-(long long)_purgeableDiskSpace;
-(STStorageOptionTip *)cachedAutoDeleteMessagesTip;
-(void)_enableAutoDeleteMessages;
-(STStorageOptionTip *)cachedMessagesOniCloudTip;
-(void)_enableMessagesOniCloud;
-(unsigned long long)_spaceSavedByReviewingLargeConversations;
-(id)_spaceTakenForSpecifier:(id)arg1 ;
-(void)_loadAttachmentSizes;
-(NSDictionary *)spaceTakenByAttachmentClass;
-(void)setAppSpecifiers:(NSArray *)arg1 ;
-(void)setCloudAppSpecifiers:(NSArray *)arg1 ;
-(void)setSpaceTakenByAttachmentClass:(NSDictionary *)arg1 ;
-(id)_autoDeleteMessagesTip;
-(id)_reviewLargeAttachmentsTip;
-(id)_messagesOniCloudTip;
-(NSDate *)cachedAttachmentsTakeUpSignificantSpaceDate;
-(BOOL)_attachmentsTakeUpMoreSpaceThanBytes:(unsigned long long)arg1 ;
-(void)setCachedAttachmentsTakeUpSignificantSpace:(BOOL)arg1 ;
-(void)setCachedAttachmentsTakeUpSignificantSpaceDate:(NSDate *)arg1 ;
-(BOOL)cachedAttachmentsTakeUpSignificantSpace;
-(double)lastQuerySpaceSavedByAutoDeletingMessagesTime;
-(void)setCachedSpaceSavedByAutoDeletingMessages:(unsigned long long)arg1 ;
-(void)setLastQuerySpaceSavedByAutoDeletingMessagesTime:(double)arg1 ;
-(unsigned long long)cachedSpaceSavedByAutoDeletingMessages;
-(IMCloudKitHooks *)cloudKitHooks;
-(BOOL)_forceShowingAutoDeleteMessagesTip;
-(unsigned long long)_spaceSavedByAutoDeleteMessages;
-(BOOL)_shouldDisplayAutoDeleteMessagesTip;
-(void)setCachedAutoDeleteMessagesTip:(STStorageOptionTip *)arg1 ;
-(double)lastQuerySpaceSavedByReviewingLargeConversationsTime;
-(unsigned long long)_totalSpaceOfLargeConversations;
-(void)setCachedSpaceSavedByReviewingLargeConversations:(unsigned long long)arg1 ;
-(void)setLastQuerySpaceSavedByReviewingLargeConversationsTime:(double)arg1 ;
-(unsigned long long)cachedSpaceSavedByReviewingLargeConversations;
-(BOOL)_forceShowingReviewLargeAttachmentsTip;
-(BOOL)_attachmentsTakeUpSignificantSpace;
-(BOOL)_shouldDisplayReviewLargeAttachmentsTip;
-(STStorageActionTip *)cachedReviewLargeAttachmentsTip;
-(long long)_totalSpaceOfAttachments;
-(void)setCachedReviewLargeAttachmentsTip:(STStorageActionTip *)arg1 ;
-(double)lastQuerySpaceSavedByNonSyncedDeletingAttachments;
-(void)setCachedSpaceSavedByDeletingNonSyncedAttachments:(unsigned long long)arg1 ;
-(void)setLastQuerySpaceSavedByNonSyncedDeletingAttachments:(double)arg1 ;
-(unsigned long long)cachedSpaceSavedByDeletingNonSyncedAttachments;
-(void)_displayICloudErrorMessage;
-(void)_refreshMessageOniCloudTipIfNeeded;
-(void)enableOptionForTip:(id)arg1 ;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg1 ;
-(id)cloudDocumentSpecifiers;
-(id)externDataSizeAppIdentifiers;
-(long long)externDataSizeForApp:(id)arg1 ;
-(unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;
-(STStorageActionTip *)cachedReviewLargeConversationsTip;
-(void)setCachedReviewLargeConversationsTip:(STStorageActionTip *)arg1 ;
-(void)setCachedMessagesOniCloudTip:(STStorageOptionTip *)arg1 ;
-(void)setCloudKitHooks:(IMCloudKitHooks *)arg1 ;
@end


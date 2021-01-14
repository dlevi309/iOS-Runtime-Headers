/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)messageDatabaseSize;
-(void)_iCloudHooksSetEnabledReturned:(id)arg1 ;
-(void)_iCloudHooksValuesChanged:(id)arg1 ;
-(void)_loadAppSpecifiers;
-(void)_loadiCloudAppSpecifiers;
-(NSArray *)cloudAppSpecifiers;
-(BOOL)_cloudKitEnabled;
-(long long)_purgeableDiskSpace;
-(STStorageOptionTip *)cachedAutoDeleteMessagesTip;
-(void)_enableAutoDeleteMessages;
-(STStorageOptionTip *)cachedMessagesOniCloudTip;
-(void)_enableMessagesOniCloud;
-(unsigned long long)_spaceSavedByReviewingLargeConversations;
-(void)setAppSpecifiers:(NSArray *)arg1 ;
-(id)_spaceTakenForSpecifier:(id)arg1 ;
-(void)_loadAttachmentSizes;
-(NSDictionary *)spaceTakenByAttachmentClass;
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
-(IMCloudKitHooks *)cloudKitHooks;
-(unsigned long long)cachedSpaceSavedByAutoDeletingMessages;
-(BOOL)_forceShowingAutoDeleteMessagesTip;
-(unsigned long long)_spaceSavedByAutoDeleteMessages;
-(BOOL)_shouldDisplayAutoDeleteMessagesTip;
-(void)setCachedAutoDeleteMessagesTip:(STStorageOptionTip *)arg1 ;
-(double)lastQuerySpaceSavedByReviewingLargeConversationsTime;
-(long long)_totalSpaceOfAttachments;
-(unsigned long long)_totalSpaceOfLargeConversations;
-(void)setCachedSpaceSavedByReviewingLargeConversations:(unsigned long long)arg1 ;
-(void)setLastQuerySpaceSavedByReviewingLargeConversationsTime:(double)arg1 ;
-(unsigned long long)cachedSpaceSavedByReviewingLargeConversations;
-(BOOL)_forceShowingReviewLargeAttachmentsTip;
-(BOOL)_attachmentsTakeUpSignificantSpace;
-(STStorageActionTip *)cachedReviewLargeAttachmentsTip;
-(BOOL)_shouldDisplayReviewLargeAttachmentsTip;
-(void)setCachedReviewLargeAttachmentsTip:(STStorageActionTip *)arg1 ;
-(void)_displayICloudErrorMessage;
-(double)lastQuerySpaceSavedByNonSyncedDeletingAttachments;
-(void)setCachedSpaceSavedByDeletingNonSyncedAttachments:(unsigned long long)arg1 ;
-(id)init;
-(void)setLastQuerySpaceSavedByNonSyncedDeletingAttachments:(double)arg1 ;
-(unsigned long long)cachedSpaceSavedByDeletingNonSyncedAttachments;
-(void)_refreshMessageOniCloudTipIfNeeded;
-(void)enableOptionForTip:(id)arg1 ;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg1 ;
-(id)cloudDocumentSpecifiers;
-(id)externDataSizeAppIdentifiers;
-(long long)externDataSizeForApp:(id)arg1 ;
-(STStorageActionTip *)cachedReviewLargeConversationsTip;
-(unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;
-(void)setCachedReviewLargeConversationsTip:(STStorageActionTip *)arg1 ;
-(void)setCachedMessagesOniCloudTip:(STStorageOptionTip *)arg1 ;
-(void)setCloudKitHooks:(IMCloudKitHooks *)arg1 ;
-(void)_loadTips;
-(void)dealloc;
-(NSArray *)appSpecifiers;
@end


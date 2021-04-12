/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICAppURLUtilities : NSObject
+(id)firstQueryItemInURL:(id)arg1 withURLScheme:(id)arg2 andHost:(id)arg3 andQueryItemName:(id)arg4 ;
+(BOOL)isShowNoteURL:(id)arg1 ;
+(BOOL)isShowHTMLNoteURL:(id)arg1 ;
+(BOOL)isQuickNoteModeURL:(id)arg1 ;
+(id)urlForAppURLAction:(long long)arg1 ;
+(long long)appURLActionFromURL:(id)arg1 ;
+(id)appURLForNote:(id)arg1 ;
+(id)predicateForNoteMentionedInURL:(id)arg1 ;
+(id)appURLForHTMLNote:(id)arg1 ;
+(id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1 ;
+(id)appURLForFolderList;
+(BOOL)isShowFolderListURL:(id)arg1 ;
+(BOOL)isShowLegacyNoteURL:(id)arg1 ;
+(id)urlForQuickNoteWithOptions:(id)arg1 ;
+(BOOL)isLaunchingQuickNoteViaPencil:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowList:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowShareSheet:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)arg1 ;
+(id)attachmentIdentifierFromQuickNoteURL:(id)arg1 ;
+(id)noteIdentifierFromQuickNoteURL:(id)arg1 ;
+(id)contentOffsetFromQuickNoteURL:(id)arg1 ;
+(id)referralURLForSnapshotBackgroundTask;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

@class NSSet;


@protocol ICSearchIndexableNote <ICSearchIndexable>
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSSet * noteCellKeyPaths; 
@property (nonatomic,readonly) BOOL hasUnreadChanges; 
@property (nonatomic,readonly) BOOL isDeletedOrInTrash; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) long long currentStatus; 
@required
-(id)accountName;
-(BOOL)isPinned;
-(id)identifier;
-(id)folderName;
-(BOOL)isModernNote;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(NSSet *)noteCellKeyPaths;
-(id)contentInfoText;
-(BOOL)hasUnreadChanges;
-(BOOL)isDeletedOrInTrash;
-(long long)currentStatus;
-(id)title;

@end


/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

@class NSArray;


@protocol ICSearchIndexableNote <ICSearchIndexable>
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSArray * noteCellKeyPaths; 
@required
-(id)identifier;
-(id)title;
-(id)accountName;
-(id)folderName;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(NSArray *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)dateForCurrentSortType;

@end


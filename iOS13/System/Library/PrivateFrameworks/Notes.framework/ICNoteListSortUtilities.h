/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@interface ICNoteListSortUtilities : NSObject
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 ;
+(long long)currentNoteListSortType;
+(id)sortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2 ;
+(id)sortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForPinnedNotes;
+(long long)sortTypeForFolderNoteOrder:(unsigned long long)arg1 ;
+(long long)sortTypeForTag:(long long)arg1 ;
+(void)setCurrentNoteListSortType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentType;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 folderNoteSortType:(id)arg2 ;
+(id)descriptionForNoteListSortType:(long long)arg1 ;
+(void)setCurrentNoteListSortTypeByTag:(long long)arg1 ;
+(BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1 ;
+(long long)tagForSortType:(long long)arg1 ;
@end


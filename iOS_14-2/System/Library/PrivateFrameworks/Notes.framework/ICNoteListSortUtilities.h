/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@interface ICNoteListSortUtilities : NSObject
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 ;
+(long long)currentNoteListSortType;
+(id)sortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2 ;
+(id)legacySortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2 ;
+(id)sortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForPinnedNotes;
+(long long)sortTypeForTag:(long long)arg1 ;
+(long long)sortTypeForFolderNoteOrder:(unsigned long long)arg1 ;
+(void)setCurrentNoteListSortType:(long long)arg1 ;
+(id)dateForCurrentSortTypeForNote:(id)arg1 ;
+(id)legacySortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentType;
+(id)descriptionForNoteListSortType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 folderNoteSortType:(id)arg2 ;
+(void)setCurrentNoteListSortTypeByTag:(long long)arg1 ;
+(BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1 ;
+(long long)tagForSortType:(long long)arg1 ;
+(id)dateForCurrentSortTypeAccessibilityStringForNote:(id)arg1 ;
@end


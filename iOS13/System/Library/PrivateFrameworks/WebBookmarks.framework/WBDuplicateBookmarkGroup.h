/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class NSMutableArray, WebBookmark, NSArray;

@interface WBDuplicateBookmarkGroup : NSObject {

	NSMutableArray* _dupicateBookmarks;
	NSMutableArray* _dupicateBookmarksToKeep;
	BOOL _foundDuplicates;
	WebBookmark* _originalBookmark;

}

@property (nonatomic,readonly) WebBookmark * originalBookmark;              //@synthesize originalBookmark=_originalBookmark - In the implementation block
@property (nonatomic,readonly) NSArray * duplicates; 
@property (nonatomic,readonly) NSArray * duplicatesToKeep; 
@property (nonatomic,readonly) BOOL foundDuplicates;                        //@synthesize foundDuplicates=_foundDuplicates - In the implementation block
-(NSArray *)duplicates;
-(id)initWithOriginalBookmark:(id)arg1 ;
-(NSArray *)duplicatesToKeep;
-(void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2 ;
-(void)addDuplicateBookmarkToKeep:(id)arg1 ;
-(void)exchangeOriginalBookmarkWithBookmark:(id)arg1 ;
-(void)removeAllDuplicates;
-(WebBookmark *)originalBookmark;
-(BOOL)foundDuplicates;
@end


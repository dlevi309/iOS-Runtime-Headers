/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOriginalBookmark:(id)arg1 ;
-(NSArray *)duplicatesToKeep;
-(void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2 ;
-(void)addDuplicateBookmarkToKeep:(id)arg1 ;
-(void)exchangeOriginalBookmarkWithBookmark:(id)arg1 ;
-(void)removeAllDuplicates;
-(WebBookmark *)originalBookmark;
-(BOOL)foundDuplicates;
-(NSArray *)duplicates;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSOrderedSet;

@interface PUSearchHistoryManager : NSObject {

	NSOrderedSet* _recentSearches;

}

@property (nonatomic,retain) NSOrderedSet * recentSearches;              //@synthesize recentSearches=_recentSearches - In the implementation block
+(id)sharedManager;
-(void)clearRecentSearches;
-(void)saveRecentSearch:(id)arg1 ;
-(void)setRecentSearches:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)recentSearches;
-(id)_recentSearchesFileURL;
-(BOOL)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id*)arg3 ;
-(id)_readRecentSearchesFromURL:(id)arg1 ;
-(id)_readRecentSearchesFromUserDefaults;
@end


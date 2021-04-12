/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray;

@interface PXSearchHistoryManager : NSObject {

	NSArray* _recentSearches;

}

@property (nonatomic,retain) NSArray * recentSearches;              //@synthesize recentSearches=_recentSearches - In the implementation block
+(id)sharedManager;
-(void)clearRecentSearches;
-(void)saveRecentSearch:(id)arg1 ;
-(void)setRecentSearches:(NSArray *)arg1 ;
-(NSArray *)recentSearches;
-(id)_recentSearchesFileURL;
-(BOOL)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id*)arg3 ;
-(id)_readRecentSearchesFromURL:(id)arg1 ;
@end


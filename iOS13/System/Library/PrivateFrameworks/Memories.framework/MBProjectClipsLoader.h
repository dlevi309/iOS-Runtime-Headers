/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/MBClipsLoader.h>

@class Project, NSMutableDictionary, NSMutableArray;

@interface MBProjectClipsLoader : MBClipsLoader {

	Project* _project;
	NSMutableDictionary* _identifierURLsToClipsMap;
	NSMutableArray* _assetURLs;

}

@property (retain) NSMutableDictionary * identifierURLsToClipsMap;              //@synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap - In the implementation block
@property (nonatomic,retain) Project * project;                                 //@synthesize project=_project - In the implementation block
@property (retain) NSMutableArray * assetURLs;                                  //@synthesize assetURLs=_assetURLs - In the implementation block
+(BOOL)clipFormatValid:(id)arg1 validateVideoFormat:(BOOL)arg2 ;
-(void)dealloc;
-(void)load;
-(id)clips;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)setIdentifierURLsToClipsMap:(NSMutableDictionary *)arg1 ;
-(void)projectMoviesDidChange:(id)arg1 ;
-(void)projectDidCleanupUnusedMediaFiles:(id)arg1 ;
-(NSMutableDictionary *)identifierURLsToClipsMap;
-(void)removeClipWithURL:(id)arg1 ;
-(NSMutableArray *)assetURLs;
-(void)setAssetURLs:(NSMutableArray *)arg1 ;
-(id)initWithProject:(id)arg1 showOnlyFavorites:(BOOL)arg2 ;
-(void)loadClipAtPath:(id)arg1 ;
-(void)projectDidUndoOrRedo:(id)arg1 ;
-(long long)countForAllClips;
@end


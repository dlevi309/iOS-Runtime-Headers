/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray, NSArray;

@interface MBClipsLoader : NSObject {

	BOOL _loading;
	BOOL _showOnlyFavorites;
	NSMutableArray* _clips;
	NSArray* _previousClips;

}

@property (retain) NSMutableArray * clips;                               //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic) BOOL showOnlyFavorites;                     //@synthesize showOnlyFavorites=_showOnlyFavorites - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (retain) NSArray * previousClips;                              //@synthesize previousClips=_previousClips - In the implementation block
-(void)load;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)startLoading;
-(NSMutableArray *)clips;
-(void)setClips:(NSMutableArray *)arg1 ;
-(void)stopLoading;
-(id)initWithShowOnlyFavorites:(BOOL)arg1 ;
-(BOOL)showOnlyFavorites;
-(NSArray *)previousClips;
-(void)setShowOnlyFavorites:(BOOL)arg1 ;
-(void)setPreviousClips:(NSArray *)arg1 ;
@end


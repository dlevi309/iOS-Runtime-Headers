/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying> {

	BOOL _includesAllFaces;
	BOOL _semanticalDedupingEnabled;
	BOOL _semanticalDedupingUsesAdaptiveSimilarStacking;
	BOOL _movieDedupingEnabled;
	BOOL _lastPassMovieAdditionEnabled;
	BOOL _focusOnPeople;
	BOOL _focusOnInterestingItems;
	unsigned long long _duration;
	unsigned long long _precision;
	long long _cardinalMode;
	NSSet* _uuidsOfRequiredAssets;

}

@property (assign,nonatomic) unsigned long long duration;                                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                                                         //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) BOOL includesAllFaces;                                                                //@synthesize includesAllFaces=_includesAllFaces - In the implementation block
@property (assign,nonatomic) BOOL focusOnPeople;                                                                   //@synthesize focusOnPeople=_focusOnPeople - In the implementation block
@property (assign,nonatomic) BOOL focusOnInterestingItems;                                                         //@synthesize focusOnInterestingItems=_focusOnInterestingItems - In the implementation block
@property (assign,getter=semanticalDedupingIsEnabled,nonatomic) BOOL semanticalDedupingEnabled;                    //@synthesize semanticalDedupingEnabled=_semanticalDedupingEnabled - In the implementation block
@property (assign,nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking;                                   //@synthesize semanticalDedupingUsesAdaptiveSimilarStacking=_semanticalDedupingUsesAdaptiveSimilarStacking - In the implementation block
@property (assign,getter=movieDedupingIsEnabled,nonatomic) BOOL movieDedupingEnabled;                              //@synthesize movieDedupingEnabled=_movieDedupingEnabled - In the implementation block
@property (assign,getter=lastPassMovieAdditionIsEnabled,nonatomic) BOOL lastPassMovieAdditionEnabled;              //@synthesize lastPassMovieAdditionEnabled=_lastPassMovieAdditionEnabled - In the implementation block
@property (assign,nonatomic) long long cardinalMode;                                                               //@synthesize cardinalMode=_cardinalMode - In the implementation block
@property (nonatomic,copy) NSSet * uuidsOfRequiredAssets;                                                          //@synthesize uuidsOfRequiredAssets=_uuidsOfRequiredAssets - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)duration;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setIncludesAllFaces:(BOOL)arg1 ;
-(id)initWithDuration:(unsigned long long)arg1 precision:(unsigned long long)arg2 ;
-(void)setFocusOnPeople:(BOOL)arg1 ;
-(BOOL)includesAllFaces;
-(BOOL)semanticalDedupingIsEnabled;
-(void)setSemanticalDedupingEnabled:(BOOL)arg1 ;
-(BOOL)semanticalDedupingUsesAdaptiveSimilarStacking;
-(void)setSemanticalDedupingUsesAdaptiveSimilarStacking:(BOOL)arg1 ;
-(BOOL)movieDedupingIsEnabled;
-(void)setMovieDedupingEnabled:(BOOL)arg1 ;
-(BOOL)lastPassMovieAdditionIsEnabled;
-(void)setLastPassMovieAdditionEnabled:(BOOL)arg1 ;
-(long long)cardinalMode;
-(void)setCardinalMode:(long long)arg1 ;
-(NSSet *)uuidsOfRequiredAssets;
-(void)setUuidsOfRequiredAssets:(NSSet *)arg1 ;
-(BOOL)focusOnPeople;
-(BOOL)focusOnInterestingItems;
-(void)setFocusOnInterestingItems:(BOOL)arg1 ;
@end


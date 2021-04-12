/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying> {

	int _favoritesCount;
	int _followedPublisherCount;
	int _personalCollectionsCount;
	int _savedCollectionsCount;
	int _submittedPhotosCount;
	int _submittedRatingsCount;
	BOOL _homeFavoriteSet;
	BOOL _schoolFavoriteSet;
	BOOL _workFavoriteSet;
	struct {
		unsigned has_favoritesCount : 1;
		unsigned has_followedPublisherCount : 1;
		unsigned has_personalCollectionsCount : 1;
		unsigned has_savedCollectionsCount : 1;
		unsigned has_submittedPhotosCount : 1;
		unsigned has_submittedRatingsCount : 1;
		unsigned has_homeFavoriteSet : 1;
		unsigned has_schoolFavoriteSet : 1;
		unsigned has_workFavoriteSet : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHomeFavoriteSet; 
@property (assign,nonatomic) BOOL homeFavoriteSet; 
@property (assign,nonatomic) BOOL hasWorkFavoriteSet; 
@property (assign,nonatomic) BOOL workFavoriteSet; 
@property (assign,nonatomic) BOOL hasSchoolFavoriteSet; 
@property (assign,nonatomic) BOOL schoolFavoriteSet; 
@property (assign,nonatomic) BOOL hasFavoritesCount; 
@property (assign,nonatomic) int favoritesCount; 
@property (assign,nonatomic) BOOL hasPersonalCollectionsCount; 
@property (assign,nonatomic) int personalCollectionsCount; 
@property (assign,nonatomic) BOOL hasSavedCollectionsCount; 
@property (assign,nonatomic) int savedCollectionsCount; 
@property (assign,nonatomic) BOOL hasFollowedPublisherCount; 
@property (assign,nonatomic) int followedPublisherCount; 
@property (assign,nonatomic) BOOL hasSubmittedRatingsCount; 
@property (assign,nonatomic) int submittedRatingsCount; 
@property (assign,nonatomic) BOOL hasSubmittedPhotosCount; 
@property (assign,nonatomic) int submittedPhotosCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)favoritesCount;
-(void)setHomeFavoriteSet:(BOOL)arg1 ;
-(void)setWorkFavoriteSet:(BOOL)arg1 ;
-(void)setSchoolFavoriteSet:(BOOL)arg1 ;
-(void)setFavoritesCount:(int)arg1 ;
-(void)setPersonalCollectionsCount:(int)arg1 ;
-(void)setSavedCollectionsCount:(int)arg1 ;
-(void)setFollowedPublisherCount:(int)arg1 ;
-(void)setSubmittedRatingsCount:(int)arg1 ;
-(void)setSubmittedPhotosCount:(int)arg1 ;
-(BOOL)homeFavoriteSet;
-(void)setHasHomeFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasHomeFavoriteSet;
-(BOOL)workFavoriteSet;
-(void)setHasWorkFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasWorkFavoriteSet;
-(BOOL)schoolFavoriteSet;
-(void)setHasSchoolFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasSchoolFavoriteSet;
-(void)setHasFavoritesCount:(BOOL)arg1 ;
-(BOOL)hasFavoritesCount;
-(int)personalCollectionsCount;
-(void)setHasPersonalCollectionsCount:(BOOL)arg1 ;
-(BOOL)hasPersonalCollectionsCount;
-(int)savedCollectionsCount;
-(void)setHasSavedCollectionsCount:(BOOL)arg1 ;
-(BOOL)hasSavedCollectionsCount;
-(int)followedPublisherCount;
-(void)setHasFollowedPublisherCount:(BOOL)arg1 ;
-(BOOL)hasFollowedPublisherCount;
-(int)submittedRatingsCount;
-(void)setHasSubmittedRatingsCount:(BOOL)arg1 ;
-(BOOL)hasSubmittedRatingsCount;
-(int)submittedPhotosCount;
-(void)setHasSubmittedPhotosCount:(BOOL)arg1 ;
-(BOOL)hasSubmittedPhotosCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


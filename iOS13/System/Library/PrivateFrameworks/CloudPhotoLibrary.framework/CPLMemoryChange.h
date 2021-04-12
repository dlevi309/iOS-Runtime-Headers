/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLMemoryAssetList, NSData, NSDate;

@interface CPLMemoryChange : CPLRecordChange {

	BOOL _favorite;
	BOOL _rejected;
	BOOL _userCreated;
	NSString* _title;
	NSString* _subtitle;
	long long _category;
	long long _subcategory;
	CPLMemoryAssetList* _assetList;
	NSData* _assetListPredicate;
	NSDate* _creationDate;
	NSData* _graphData;
	long long _graphVersion;
	NSData* _movieData;
	double _score;
	long long _notificationState;
	NSData* _blacklistedFeature;
	long long _playCount;
	long long _shareCount;
	long long _viewCount;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long category;                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long subcategory;                              //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,copy) CPLMemoryAssetList * assetList;                       //@synthesize assetList=_assetList - In the implementation block
@property (nonatomic,copy) NSData * assetListPredicate;                          //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSData * graphData;                                   //@synthesize graphData=_graphData - In the implementation block
@property (assign,nonatomic) long long graphVersion;                             //@synthesize graphVersion=_graphVersion - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                    //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isRejected,nonatomic) BOOL rejected;                    //@synthesize rejected=_rejected - In the implementation block
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated;              //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,copy) NSData * movieData;                                   //@synthesize movieData=_movieData - In the implementation block
@property (assign,nonatomic) double score;                                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long notificationState;                        //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,copy) NSData * blacklistedFeature;                          //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (assign,nonatomic) long long playCount;                                //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) long long shareCount;                               //@synthesize shareCount=_shareCount - In the implementation block
@property (assign,nonatomic) long long viewCount;                                //@synthesize viewCount=_viewCount - In the implementation block
+(id)_createTestMemoryWithAssets:(id)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)score;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(void)setScore:(double)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isFavorite;
-(long long)subcategory;
-(BOOL)isRejected;
-(void)setRejected:(BOOL)arg1 ;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isUserCreated;
-(void)setUserCreated:(BOOL)arg1 ;
-(void)setSubcategory:(long long)arg1 ;
-(NSData *)movieData;
-(void)setMovieData:(NSData *)arg1 ;
-(NSData *)assetListPredicate;
-(void)setAssetListPredicate:(NSData *)arg1 ;
-(long long)notificationState;
-(void)setNotificationState:(long long)arg1 ;
-(NSData *)blacklistedFeature;
-(void)setBlacklistedFeature:(NSData *)arg1 ;
-(long long)playCount;
-(void)setPlayCount:(long long)arg1 ;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(long long)viewCount;
-(void)setViewCount:(long long)arg1 ;
-(void)setAssetList:(CPLMemoryAssetList *)arg1 ;
-(CPLMemoryAssetList *)assetList;
-(void)setGraphVersion:(long long)arg1 ;
-(void)setGraphData:(NSData *)arg1 ;
-(long long)graphVersion;
-(NSData *)graphData;
-(BOOL)supportsDeletion;
-(id)propertiesDescription;
-(BOOL)supportsDirectDeletion;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
@end


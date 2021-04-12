/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSDictionary, PHRelationshipChangeRequestHelper, NSDate, PHObjectPlaceholder, NSData, NSString, PHMemoryFeature, NSManagedObjectID;

@interface PHMemoryChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	BOOL _clientEntitledToMemoryMutation;
	BOOL _incrementPlayCount;
	BOOL _incrementShareCount;
	BOOL _incrementViewCount;
	NSDictionary* _movieAssetState;
	PHRelationshipChangeRequestHelper* _keyAssetHelper;
	PHRelationshipChangeRequestHelper* _representativeAssetsHelper;
	PHRelationshipChangeRequestHelper* _curatedAssetsHelper;
	PHRelationshipChangeRequestHelper* _extendedCuratedAssetsHelper;
	PHRelationshipChangeRequestHelper* _movieCuratedAssetsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyAssetHelper;                           //@synthesize keyAssetHelper=_keyAssetHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * representativeAssetsHelper;               //@synthesize representativeAssetsHelper=_representativeAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * curatedAssetsHelper;                      //@synthesize curatedAssetsHelper=_curatedAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * extendedCuratedAssetsHelper;              //@synthesize extendedCuratedAssetsHelper=_extendedCuratedAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * movieCuratedAssetsHelper;                 //@synthesize movieCuratedAssetsHelper=_movieCuratedAssetsHelper - In the implementation block
@property (nonatomic,readonly) BOOL clientEntitledToMemoryMutation;                                          //@synthesize clientEntitledToMemoryMutation=_clientEntitledToMemoryMutation - In the implementation block
@property (assign,nonatomic) unsigned long long category; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMemory; 
@property (assign,getter=isRejected,nonatomic) BOOL rejected; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isPending,nonatomic) BOOL pending; 
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated; 
@property (assign,nonatomic) double score; 
@property (nonatomic,readonly) NSDictionary * movieAssetState;                                               //@synthesize movieAssetState=_movieAssetState - In the implementation block
@property (nonatomic,retain) NSData * movieData; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) unsigned long long notificationState; 
@property (nonatomic,retain) PHMemoryFeature * blacklistedFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (readonly) BOOL isNewRequest; 
@property (nonatomic,readonly) id concurrentWorkBlock; 
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)validateMemoryTitle:(id)arg1 error:(id*)arg2 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 extendedCuratedAssets:(id)arg8 keyAsset:(id)arg9 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 assets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7 ;
+(id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2 ;
+(id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2 ;
+(id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2 ;
+(BOOL)_shouldAcceptProposedAttributes:(id)arg1 ;
+(long long)_titleFormatForProposedAttributes:(id)arg1 ;
+(id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(BOOL)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6 ;
+(id)changeRequestForMemory:(id)arg1 ;
+(void)deleteMemories:(id)arg1 ;
+(id)changeRequestForRemotelyViewedMemoryWithLocalIdentifier:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)score;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(BOOL)isPending;
-(void)setScore:(double)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isFavorite;
-(void)setPending:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(NSDate *)lastViewedDate;
-(void)setKeyAsset:(id)arg1 ;
-(unsigned long long)subcategory;
-(long long)photosGraphVersion;
-(NSData *)photosGraphData;
-(BOOL)isRejected;
-(void)setRejected:(BOOL)arg1 ;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isUserCreated;
-(void)setUserCreated:(BOOL)arg1 ;
-(void)setSubcategory:(unsigned long long)arg1 ;
-(NSData *)movieData;
-(void)setMovieData:(NSData *)arg1 ;
-(NSDictionary *)movieAssetState;
-(void)setPhotosGraphVersion:(long long)arg1 ;
-(void)setPhotosGraphData:(NSData *)arg1 ;
-(unsigned long long)notificationState;
-(void)setNotificationState:(unsigned long long)arg1 ;
-(PHMemoryFeature *)blacklistedFeature;
-(void)setBlacklistedFeature:(PHMemoryFeature *)arg1 ;
-(void)setMovieCuratedAssets:(id)arg1 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_mutableKeyAssetObjectIDsAndUUIDs;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)_prepareAssetIDsIfNeeded;
-(NSDate *)lastMoviePlayedDate;
-(PHObjectPlaceholder *)placeholderForCreatedMemory;
-(void)setLastMoviePlayedDate:(NSDate *)arg1 ;
-(id)_mutableRepresentativeAssetObjectIDsAndUUIDs;
-(id)_mutableCuratedAssetObjectIDsAndUUIDs;
-(id)_mutableExtendedCuratedAssetObjectIDsAndUUIDs;
-(void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 keyAsset:(id)arg4 ;
-(void)setMovieStateData:(id)arg1 forAsset:(id)arg2 ;
-(void)setQueryHintObject:(id)arg1 ;
-(void)setQueryHintObjects:(id)arg1 ;
-(void)incrementPlayCount;
-(void)incrementShareCount;
-(void)incrementViewCount;
-(BOOL)clientEntitledToMemoryMutation;
-(PHRelationshipChangeRequestHelper *)keyAssetHelper;
-(PHRelationshipChangeRequestHelper *)representativeAssetsHelper;
-(PHRelationshipChangeRequestHelper *)curatedAssetsHelper;
-(PHRelationshipChangeRequestHelper *)extendedCuratedAssetsHelper;
-(PHRelationshipChangeRequestHelper *)movieCuratedAssetsHelper;
@end


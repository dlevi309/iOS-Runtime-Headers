/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHRelationshipChangeRequestHelper, PHPhotosHighlight, NSDictionary, PHObjectPlaceholder, NSString, NSDate, NSManagedObjectID;

@interface PHPhotosHighlightChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHRelationshipChangeRequestHelper* _dayKeyAssetHelper;
	PHRelationshipChangeRequestHelper* _monthKeyAssetHelper;
	PHRelationshipChangeRequestHelper* _yearKeyAssetHelper;
	PHRelationshipChangeRequestHelper* _dayGroupKeyAssetHelper;
	PHPhotosHighlight* _originalHighlight;
	NSDictionary* _curationHelpersByCurationType;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * dayKeyAssetHelper;                   //@synthesize dayKeyAssetHelper=_dayKeyAssetHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * monthKeyAssetHelper;                 //@synthesize monthKeyAssetHelper=_monthKeyAssetHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * yearKeyAssetHelper;                  //@synthesize yearKeyAssetHelper=_yearKeyAssetHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * dayGroupKeyAssetHelper;              //@synthesize dayGroupKeyAssetHelper=_dayGroupKeyAssetHelper - In the implementation block
@property (nonatomic,retain) PHPhotosHighlight * originalHighlight;                                     //@synthesize originalHighlight=_originalHighlight - In the implementation block
@property (nonatomic,readonly) NSDictionary * curationHelpersByCurationType;                            //@synthesize curationHelpersByCurationType=_curationHelpersByCurationType - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedPhotosHighlight; 
@property (nonatomic,retain) NSString * dateDescription; 
@property (nonatomic,retain) NSString * smartDescription; 
@property (nonatomic,retain) NSString * verboseSmartDescription; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (assign,nonatomic) unsigned short kind; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short category; 
@property (assign,nonatomic) unsigned short visibilityState; 
@property (assign,nonatomic) long long startTimeZoneOffset; 
@property (assign,nonatomic) long long endTimeZoneOffset; 
@property (assign,nonatomic) double promotionScore; 
@property (assign,nonatomic) unsigned short enrichmentState; 
@property (assign,nonatomic) unsigned long long mood; 
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
+(id)creationRequestForPhotosHighlight;
+(id)changeRequestForPhotosHighlight:(id)arg1 ;
+(void)deletePhotosHighlights:(id)arg1 ;
-(unsigned short)type;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)category;
-(void)setCategory:(unsigned short)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned short)kind;
-(void)setKind:(unsigned short)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setKeyAsset:(id)arg1 ;
-(long long)startTimeZoneOffset;
-(void)setStartTimeZoneOffset:(long long)arg1 ;
-(long long)endTimeZoneOffset;
-(void)setEndTimeZoneOffset:(long long)arg1 ;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(unsigned short)visibilityState;
-(void)setVisibilityState:(unsigned short)arg1 ;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1 ;
-(short)enrichmentVersion;
-(unsigned long long)mood;
-(NSString *)verboseSmartDescription;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedPhotosHighlight;
-(void)_initializeCurationHelpersWithHelper:(id)arg1 xpcDict:(id)arg2 ;
-(NSString *)dateDescription;
-(void)setDateDescription:(NSString *)arg1 ;
-(NSString *)smartDescription;
-(void)setSmartDescription:(NSString *)arg1 ;
-(void)setVerboseSmartDescription:(NSString *)arg1 ;
-(void)setMood:(unsigned long long)arg1 ;
-(void)setEnrichmentVersion:(short)arg1 ;
-(unsigned short)_internalCurationTypeForExternalCurationType:(unsigned short)arg1 ;
-(unsigned short)_externalCurationTypeForInternalCurationType:(unsigned short)arg1 ;
-(void)clearCurationWithType:(unsigned short)arg1 ;
-(void)setAssets:(id)arg1 forCurationType:(unsigned short)arg2 ;
-(void)didEnrichHighlight;
-(id)_mutableKeyAssetObjectIDsAndUUIDs;
-(id)_mutableAssetObjectIDsAndUUIDsForCurationType:(unsigned short)arg1 ;
-(id)_existentAssetObjectIDs;
-(id)_existentCuratedAssetObjectIDsForCurationType:(unsigned short)arg1 ;
-(PHRelationshipChangeRequestHelper *)dayKeyAssetHelper;
-(PHRelationshipChangeRequestHelper *)monthKeyAssetHelper;
-(PHRelationshipChangeRequestHelper *)yearKeyAssetHelper;
-(PHRelationshipChangeRequestHelper *)dayGroupKeyAssetHelper;
-(PHPhotosHighlight *)originalHighlight;
-(void)setOriginalHighlight:(PHPhotosHighlight *)arg1 ;
-(NSDictionary *)curationHelpersByCurationType;
@end


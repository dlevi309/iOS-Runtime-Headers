/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHSuggestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHRelationshipChangeRequestHelper* _keyAssetsHelper;
	PHRelationshipChangeRequestHelper* _representativeAssetsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyAssetsHelper;                         //@synthesize keyAssetsHelper=_keyAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * representativeAssetsHelper;              //@synthesize representativeAssetsHelper=_representativeAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedSuggestion; 
@property (assign,nonatomic) unsigned short notificationState; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
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
+(id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7 ;
+(id)creationRequestForSuggestion;
+(id)changeRequestForSuggestion:(id)arg1 ;
+(void)deleteSuggestions:(id)arg1 ;
-(unsigned short)type;
-(void)setType:(unsigned short)arg1 ;
-(long long)version;
-(id)startDate;
-(id)endDate;
-(void)setVersion:(long long)arg1 ;
-(unsigned short)state;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setState:(unsigned short)arg1 ;
-(id)creationDate;
-(NSString *)subtitle;
-(unsigned short)subtype;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSubtype:(unsigned short)arg1 ;
-(unsigned short)notificationState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(void)setFeaturesData:(id)arg1 ;
-(id)featuresData;
-(void)setActionData:(id)arg1 ;
-(id)actionData;
-(void)setExpungeDate:(id)arg1 ;
-(id)expungeDate;
-(void)setRelevantUntilDate:(id)arg1 ;
-(id)relevantUntilDate;
-(void)setActivationDate:(id)arg1 ;
-(id)activationDate;
-(void)setRepresentativeAssets:(id)arg1 ;
-(void)setKeyAssets:(id)arg1 ;
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
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)representativeAssetsHelper;
-(PHObjectPlaceholder *)placeholderForCreatedSuggestion;
-(void)setActionProperties:(id)arg1 ;
-(void)setFeaturesProperties:(id)arg1 ;
-(void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2 ;
-(void)markActive;
-(void)markAccepted;
-(void)markDeclined;
-(void)markRetired;
-(void)markReactivated;
-(void)_calculateAndSetExpungeDate;
-(PHRelationshipChangeRequestHelper *)keyAssetsHelper;
@end


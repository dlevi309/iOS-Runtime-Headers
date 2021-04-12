/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) unsigned short featuredState; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestForSuggestion;
+(id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7 ;
+(id)changeRequestForSuggestion:(id)arg1 ;
+(void)deleteSuggestions:(id)arg1 ;
-(unsigned short)subtype;
-(id)endDate;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)setStartDate:(id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)startDate;
-(void)setCreationDate:(id)arg1 ;
-(NSString *)subtitle;
-(id)expungeDate;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)markActive;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)setType:(unsigned short)arg1 ;
-(id)featuresData;
-(id)activationDate;
-(unsigned short)notificationState;
-(unsigned short)featuredState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(void)setFeaturedState:(unsigned short)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedSuggestion;
-(PHRelationshipChangeRequestHelper *)representativeAssetsHelper;
-(void)setActivationDate:(id)arg1 ;
-(id)relevantUntilDate;
-(void)setRelevantUntilDate:(id)arg1 ;
-(void)setExpungeDate:(id)arg1 ;
-(void)setFeaturesData:(id)arg1 ;
-(void)setKeyAssets:(id)arg1 ;
-(void)setRepresentativeAssets:(id)arg1 ;
-(void)setActionProperties:(id)arg1 ;
-(void)setFeaturesProperties:(id)arg1 ;
-(void)markAccepted;
-(void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2 ;
-(void)markDeclined;
-(void)markRetired;
-(void)markReactivated;
-(void)_calculateAndSetExpungeDate;
-(PHRelationshipChangeRequestHelper *)keyAssetsHelper;
-(id)actionData;
-(id)creationDate;
-(unsigned short)type;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)setState:(unsigned short)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(unsigned short)state;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setSubtype:(unsigned short)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initForNewObject;
-(long long)version;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)managedEntityName;
-(void)setActionData:(id)arg1 ;
-(NSString *)title;
@end


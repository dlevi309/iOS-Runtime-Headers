/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>

@class PHChangeRequestHelper, PHPhotoLibrary, NSString, NSManagedObjectID;

@interface PHChangeRequest : NSObject <PHInsertChangeRequest> {

	PHChangeRequestHelper* _helper;
	BOOL _shouldPerformConcurrentWork;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                           //@synthesize helper=_helper - In the implementation block
@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;                     //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork;                           //@synthesize shouldPerformConcurrentWork=_shouldPerformConcurrentWork - In the implementation block
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
-(PHChangeRequestHelper *)helper;
-(void)didMutate;
-(NSString *)uuid;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1 ;
-(id)init;
-(NSString *)clientName;
-(PHPhotoLibrary *)photoLibrary;
-(long long)accessScopeOptionsRequirement;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isClientEntitled;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(NSManagedObjectID *)objectID;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNewRequest;
-(BOOL)isMutated;
-(void)performConcurrentWork;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)managedEntityName;
@end


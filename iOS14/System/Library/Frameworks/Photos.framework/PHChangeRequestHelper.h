/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PLClientAuthorization, PHChangeRequest;
@class NSMutableDictionary, NSMutableSet, PHPerformChangesRequest, NSString, NSManagedObjectID;

@interface PHChangeRequestHelper : NSObject {

	BOOL _isMutated;
	BOOL _isNewRequest;
	NSMutableDictionary* _mutations;
	NSMutableSet* _nilMutations;
	id<PLClientAuthorization> _clientAuthorization;
	id<PHChangeRequest> _changeRequest;
	PHPerformChangesRequest* _request;
	NSString* _uuid;
	NSManagedObjectID* _objectID;

}

@property (assign,nonatomic,__weak) id<PHChangeRequest> changeRequest;                                           //@synthesize changeRequest=_changeRequest - In the implementation block
@property (assign,nonatomic) PHPerformChangesRequest * request;                                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                                                       //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;                                                  //@synthesize mutations=_mutations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * nilMutations;                                                      //@synthesize nilMutations=_nilMutations - In the implementation block
@property (assign,getter=isNewRequest,nonatomic) BOOL newRequest; 
@property (assign,getter=isMutated,nonatomic) BOOL mutated; 
@property (nonatomic,readonly) NSString * clientDisplayName; 
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,readonly) NSString * fetchFilterIdentifier; 
@property (nonatomic,readonly) id<PLClientAuthorization> clientAuthorization;                                    //@synthesize clientAuthorization=_clientAuthorization - In the implementation block
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (getter=isClientInLimitedLibraryMode,nonatomic,readonly) BOOL clientInLimitedLibraryMode; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)clientBundleIdentifier;
-(void)didMutate;
-(NSString *)uuid;
-(id)init;
-(void)setRequest:(PHPerformChangesRequest *)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isClientEntitled;
-(id<PLClientAuthorization>)clientAuthorization;
-(void)setChangeRequest:(id<PHChangeRequest>)arg1 ;
-(id<PHChangeRequest>)changeRequest;
-(NSString *)clientDisplayName;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(NSMutableDictionary *)mutations;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(PHPerformChangesRequest *)request;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(id)description;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2 ;
-(NSMutableSet *)nilMutations;
-(BOOL)isNewRequest;
-(BOOL)isMutated;
-(BOOL)isClientInLimitedLibraryMode;
-(void)setNewRequest:(BOOL)arg1 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 request:(id)arg3 clientAuthorization:(id)arg4 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 isNew:(BOOL)arg3 changeRequest:(id)arg4 ;
-(NSString *)fetchFilterIdentifier;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(void)setMutated:(BOOL)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
@end


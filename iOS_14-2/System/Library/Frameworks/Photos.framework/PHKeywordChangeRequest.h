/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHKeywordChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedKeyword; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * shortcut; 
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
+(id)creationRequestForKeyword;
+(id)changeRequestForKeyword:(id)arg1 ;
+(void)deleteKeywords:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedKeyword;
-(BOOL)_validateMutationOfTitleToKeyword:(id)arg1 error:(id*)arg2 ;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)managedEntityName;
-(NSString *)title;
@end


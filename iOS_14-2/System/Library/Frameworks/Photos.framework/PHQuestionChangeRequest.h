/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, NSDictionary, NSDate, PHObjectPlaceholder, NSManagedObjectID;

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic,copy) NSString * entityIdentifier; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short entityType; 
@property (assign,nonatomic) unsigned short displayType; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy) NSDictionary * additionalInfo; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedQuestion; 
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
+(void)deleteQuestions:(id)arg1 ;
+(id)changeRequestForQuestion:(id)arg1 ;
+(id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8 ;
-(unsigned short)entityType;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(PHObjectPlaceholder *)placeholderForCreatedQuestion;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(double)score;
-(unsigned short)displayType;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setDisplayType:(unsigned short)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(NSDate *)creationDate;
-(void)setEntityIdentifier:(NSString *)arg1 ;
-(unsigned short)type;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)setState:(unsigned short)arg1 ;
-(NSDictionary *)additionalInfo;
-(unsigned short)state;
-(void)setEntityType:(unsigned short)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(NSString *)entityIdentifier;
-(id)initForNewObject;
-(NSString *)managedEntityName;
@end


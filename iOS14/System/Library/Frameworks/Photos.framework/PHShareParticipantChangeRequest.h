/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHObjectPlaceholder, NSManagedObjectID;

@interface PHShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSString * phoneNumber; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedShareParticipant; 
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
+(id)changeRequestForShareParticipant:(id)arg1 ;
+(id)creationRequestForShareParticipantWithEmailAddress:(id)arg1 ;
+(id)creationRequestForShareParticipantWithPhoneNumber:(id)arg1 ;
+(void)deleteShareParticipants:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedShareParticipant;
-(NSString *)emailAddress;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(NSString *)phoneNumber;
-(void)setRole:(unsigned short)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(unsigned short)role;
-(id)initForNewObject;
-(NSString *)managedEntityName;
@end


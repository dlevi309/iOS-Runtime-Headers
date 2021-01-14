/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSPersonNameComponents, PLShare;

@interface PLShareParticipant : PLManagedObject

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (assign,nonatomic) long long role; 
@property (assign,nonatomic) long long acceptanceStatus; 
@property (assign,nonatomic) long long permission; 
@property (assign,nonatomic) BOOL isCurrentUser; 
@property (nonatomic,retain) PLShare * share; 
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)updateOrInsertWithCPLShareParticipant:(id)arg1 inShare:(id)arg2 ;
+(id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_shareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)acceptanceStatus;
-(void)setRole:(long long)arg1 ;
-(id)description;
-(long long)role;
-(long long)permission;
-(void)setPermission:(long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLCloudSharedAlbum, NSArray;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (nonatomic,retain) NSString * albumGUID; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSNumber * invitationStateLocal; 
@property (nonatomic,retain) NSNumber * inviteeEmailKey; 
@property (nonatomic,retain) NSString * inviteeHashedPersonID; 
@property (nonatomic,retain) NSString * inviteeFirstName; 
@property (nonatomic,retain) NSString * inviteeLastName; 
@property (nonatomic,retain) NSString * inviteeFullName; 
@property (assign,nonatomic) BOOL isMine; 
@property (nonatomic,retain) NSDate * inviteeSubscriptionDate; 
@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (nonatomic,__weak,readonly) NSArray * inviteeEmails; 
@property (nonatomic,__weak,readonly) NSArray * inviteePhones; 
+(id)entityName;
+(id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7 ;
+(id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)awakeFromInsert;
-(void)willSave;
-(void)prepareForDeletion;
-(void)delete;
-(id)init;
-(NSArray *)inviteeEmails;
-(NSArray *)inviteePhones;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg1 ;
-(id)invitationStateDescription;
-(void)setInviteeEmails:(id)arg1 phones:(id)arg2 ;
@end


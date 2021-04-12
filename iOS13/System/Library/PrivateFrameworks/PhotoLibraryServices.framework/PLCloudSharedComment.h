/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,retain) NSNumber * isDeletable; 
@property (nonatomic,retain) NSNumber * isLike; 
@property (nonatomic,retain) NSNumber * isCaption; 
@property (nonatomic,retain) NSNumber * isBatchComment; 
@property (nonatomic,retain) NSNumber * isMyComment; 
@property (nonatomic,retain) NSString * commentText; 
@property (nonatomic,retain) NSDate * commentDate; 
@property (nonatomic,retain) NSDate * commentClientDate; 
@property (nonatomic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,__weak,readonly) NSString * commenterEmail; 
@property (nonatomic,__weak,readonly) NSString * commenterFirstName; 
@property (nonatomic,__weak,readonly) NSString * commenterLastName; 
@property (nonatomic,__weak,readonly) NSString * commenterFullName; 
@property (nonatomic,__weak,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,retain) NSString * commentType; 
+(id)entityName;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(id)init;
-(id)asset;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(BOOL)isInterestingForAlbumsSorting;
-(BOOL)isLikeBoolValue;
-(id)commenterDisplayName;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(NSString *)commenterEmail;
-(PLCloudFeedCommentsEntry *)cloudFeedEntry;
-(BOOL)_isInterestingToUser;
-(BOOL)canBeDeletedByUser;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
@end


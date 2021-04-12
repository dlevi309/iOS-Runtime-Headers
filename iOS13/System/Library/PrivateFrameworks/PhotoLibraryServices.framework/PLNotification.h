/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSMutableSet, NSDate, NSArray, NSData, NSDictionary;

@interface PLNotification : NSObject {

	long long _notificationType;
	NSString* _senderName;
	NSString* _senderEmailAddress;
	NSString* _albumTitle;
	NSString* _photosBatchID;
	NSString* _mainAssetUUID;
	BOOL _mainAssetIsMine;
	BOOL _mainAssetIsVideo;
	BOOL _containsBatchFirstKnownAsset;
	NSMutableSet* _assetUUIDs;
	long long _assetCount;
	NSMutableSet* _placeholderAssetUUIDs;
	NSMutableSet* _lowResThumbAssetUUIDs;
	int _invitationState;
	NSString* _firstCommentGUID;
	NSDate* _commentDate;
	NSString* _commentText;
	long long _commentCount;
	BOOL _commentIsCaption;
	BOOL _suppressAlert;
	NSMutableSet* _senderNames;
	BOOL _forMultipleAsset;
	BOOL _allMultipleAssetIsMine;
	BOOL _isMixedType;
	BOOL _offerToReportAsJunk;
	NSString* _interestingMemoryUUID;
	NSString* _notificationTitle;
	NSString* _notificationSubtitle;
	NSString* _suggestedCMMUUID;
	NSString* _keyMomentShareUUID;
	NSArray* _momentShareUUIDs;
	NSString* _albumUUID;
	NSString* _albumCloudGUID;
	NSDate* _date;
	NSDate* _originalDate;
	NSDate* _expirationDate;
	NSDate* _notificationDeliveryDate;
	NSData* _thumbnailImageData;

}

@property (readonly) long long notificationType;                           //@synthesize notificationType=_notificationType - In the implementation block
@property (copy,readonly) NSString * albumUUID;                            //@synthesize albumUUID=_albumUUID - In the implementation block
@property (copy,readonly) NSString * albumCloudGUID;                       //@synthesize albumCloudGUID=_albumCloudGUID - In the implementation block
@property (copy,readonly) NSString * mainAssetUUID;                        //@synthesize mainAssetUUID=_mainAssetUUID - In the implementation block
@property (copy,readonly) NSString * senderEmailAddress;                   //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) NSString * message; 
@property (copy,readonly) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (copy) NSDate * originalDate;                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (copy,readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) NSString * destinationURLString; 
@property (readonly) BOOL hasThumbnail; 
@property (readonly) NSArray * suppressionContexts; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) BOOL canMergeWithPersistedNotifications; 
@property (readonly) BOOL allAssetsAreFullResolution; 
@property (readonly) BOOL thumbnailAssetIsPlaceholder; 
@property (readonly) double completionPercentage; 
@property (assign) BOOL suppressAlert;                                     //@synthesize suppressAlert=_suppressAlert - In the implementation block
@property (copy) NSDate * notificationDeliveryDate;                        //@synthesize notificationDeliveryDate=_notificationDeliveryDate - In the implementation block
@property (readonly) NSString * requestIdentifier; 
@property (readonly) NSString * keyObjectUUID; 
@property (readonly) NSString * interestingMemoryUUID;                     //@synthesize interestingMemoryUUID=_interestingMemoryUUID - In the implementation block
@property (retain) NSData * thumbnailImageData;                            //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (readonly) BOOL offerToReportAsJunk;                             //@synthesize offerToReportAsJunk=_offerToReportAsJunk - In the implementation block
@property (readonly) NSString * photosBatchID;                             //@synthesize photosBatchID=_photosBatchID - In the implementation block
@property (readonly) NSString * commentText;                               //@synthesize commentText=_commentText - In the implementation block
+(id)requestIdentifierByNotificationType:(long long)arg1 keyObjectUUID:(id)arg2 photosBatchID:(id)arg3 ;
+(id)_UNCategoryFromNotificationType:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSDate *)date;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSDate *)expirationDate;
-(BOOL)hasThumbnail;
-(NSString *)message;
-(id)_initWithType:(long long)arg1 ;
-(NSString *)requestIdentifier;
-(long long)notificationType;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSString *)albumCloudGUID;
-(NSString *)commentText;
-(NSString *)destinationURLString;
-(id)notificationByMergingWithNotificationDictionary:(id)arg1 ;
-(NSDate *)notificationDeliveryDate;
-(NSArray *)suppressionContexts;
-(NSString *)interestingMemoryUUID;
-(NSString *)mainAssetUUID;
-(BOOL)offerToReportAsJunk;
-(id)notificationByMergingWithNotification:(id)arg1 ;
-(id)initWithExpiringMomentShareUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(void)setNotificationDeliveryDate:(NSDate *)arg1 ;
-(id)initWithSuggestedCMMUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(id)initCMMInvitationReadyToViewWithMomentShare:(id)arg1 ;
-(id)initWithExpiringMomentShares:(id)arg1 ;
-(NSString *)senderEmailAddress;
-(id)initCMMInvitationWithMomentShare:(id)arg1 ;
-(id)initWithLikeAdded:(id)arg1 ;
-(NSString *)photosBatchID;
-(id)initWithCommentAdded:(id)arg1 ;
-(NSString *)keyObjectUUID;
-(id)initWithAssetsAdded:(id)arg1 toAlbum:(id)arg2 ;
-(id)initWithMultipleContributorEnabledForAlbum:(id)arg1 ;
-(id)initWithInvitationRecordStatusChanged:(id)arg1 ;
-(id)initWithInvitationAlbum:(id)arg1 ;
-(id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3 ;
-(id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotification:(id)arg2 ;
-(id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotificationDictionary:(id)arg2 ;
-(id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 ;
-(id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(BOOL)arg15 allMultipleAssetIsMine:(BOOL)arg16 isMixedType:(BOOL)arg17 ;
-(BOOL)canMergeWithPersistedNotifications;
-(BOOL)allAssetsAreFullResolution;
-(BOOL)thumbnailAssetIsPlaceholder;
-(double)completionPercentage;
-(BOOL)isCommentPiggyBackedOnPhotosAddedNotification;
-(BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3 ;
-(id)_localizedCountFormatter;
-(NSString *)albumUUID;
-(NSDate *)originalDate;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(BOOL)suppressAlert;
-(void)setSuppressAlert:(BOOL)arg1 ;
@end


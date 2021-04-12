/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString, NSDate;

@interface PHAssetComment : PHObject {

	BOOL _isLike;
	BOOL _isCaption;
	BOOL _isBatchComment;
	BOOL _isMyComment;
	BOOL _canBeDeletedByUser;
	BOOL _isDeletable;
	BOOL _isInterestingToUser;
	NSString* _commentText;
	NSDate* _commentDate;
	NSDate* _commentClientDate;
	NSString* _cloudGUID;
	NSString* _commenterHashedPersonID;

}

@property (nonatomic,readonly) BOOL isDeletable;                                //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,readonly) NSDate * commentClientDate;                      //@synthesize commentClientDate=_commentClientDate - In the implementation block
@property (nonatomic,readonly) NSString * cloudGUID;                            //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,readonly) NSString * commenterHashedPersonID;              //@synthesize commenterHashedPersonID=_commenterHashedPersonID - In the implementation block
@property (nonatomic,readonly) BOOL isInterestingToUser;                        //@synthesize isInterestingToUser=_isInterestingToUser - In the implementation block
@property (nonatomic,readonly) BOOL isLike;                                     //@synthesize isLike=_isLike - In the implementation block
@property (nonatomic,readonly) BOOL isCaption;                                  //@synthesize isCaption=_isCaption - In the implementation block
@property (nonatomic,readonly) BOOL isBatchComment;                             //@synthesize isBatchComment=_isBatchComment - In the implementation block
@property (nonatomic,readonly) BOOL isMyComment;                                //@synthesize isMyComment=_isMyComment - In the implementation block
@property (nonatomic,readonly) NSString * commentText;                          //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,readonly) NSDate * commentDate;                            //@synthesize commentDate=_commentDate - In the implementation block
@property (nonatomic,readonly) NSString * commenterEmail; 
@property (nonatomic,readonly) NSString * commenterFirstName; 
@property (nonatomic,readonly) NSString * commenterLastName; 
@property (nonatomic,readonly) NSString * commenterFullName; 
@property (nonatomic,readonly) BOOL isInterestingForAlbumsSorting; 
@property (nonatomic,readonly) NSString * commenterDisplayName; 
@property (nonatomic,readonly) BOOL canBeDeletedByUser;                         //@synthesize canBeDeletedByUser=_canBeDeletedByUser - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
-(BOOL)isDeletable;
-(NSString *)cloudGUID;
-(id)personInfoManager;
-(NSString *)commentText;
-(BOOL)isMyComment;
-(BOOL)isLike;
-(BOOL)isBatchComment;
-(BOOL)isCaption;
-(NSDate *)commentDate;
-(BOOL)isInterestingForAlbumsSorting;
-(NSString *)commenterDisplayName;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(NSString *)commenterEmail;
-(BOOL)canBeDeletedByUser;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
-(NSString *)commenterHashedPersonID;
-(NSDate *)commentClientDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)_isInterestingToUser:(id)arg1 ;
-(BOOL)isInterestingToUser;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSDate, PHMomentSharePreview, NSURL, NSData, NSString;

@interface PHMomentShare : PHAssetCollection {

	NSDate* _creationDate;
	PHMomentSharePreview* _preview;
	BOOL _shouldIgnoreBudgets;
	BOOL _shouldNotifyOnUploadCompletion;
	unsigned short _status;
	short _mode;
	unsigned short _trashedState;
	short _publishState;
	unsigned long long _assetCount;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	unsigned long long _uploadedPhotosCount;
	unsigned long long _uploadedVideosCount;
	NSURL* _shareURL;
	NSDate* _expiryDate;
	NSData* _previewData;
	NSData* _thumbnailImageData;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) NSData * previewData;                                //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,readonly) NSData * thumbnailImageData;                         //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;                          //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short status;                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) short mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned short trashedState;                         //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,readonly) short publishState;                                  //@synthesize publishState=_publishState - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount;                       //@synthesize assetCount=_assetCount - In the implementation block
@property (nonatomic,readonly) unsigned long long photosCount;                      //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long videosCount;                      //@synthesize videosCount=_videosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadedPhotosCount;              //@synthesize uploadedPhotosCount=_uploadedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadedVideosCount;              //@synthesize uploadedVideosCount=_uploadedVideosCount - In the implementation block
@property (nonatomic,readonly) PHMomentSharePreview * preview; 
@property (nonatomic,readonly) NSURL * shareURL;                                    //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                                 //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) BOOL shouldIgnoreBudgets;                            //@synthesize shouldIgnoreBudgets=_shouldIgnoreBudgets - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotifyOnUploadCompletion;                 //@synthesize shouldNotifyOnUploadCompletion=_shouldNotifyOnUploadCompletion - In the implementation block
+(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsMomentShareTrashedState;
+(BOOL)managedObjectSupportsMomentShareExpiredState;
+(id)_phErrorFromError:(id)arg1 ;
+(id)fetchLocalMomentShareFromShareURL:(id)arg1 error:(id*)arg2 ;
+(id)_fetchLocalMomentShareWithUUID:(id)arg1 error:(id*)arg2 ;
+(id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2 ;
-(unsigned short)status;
-(short)mode;
-(id)creationDate;
-(NSDate *)expiryDate;
-(PHMomentSharePreview *)preview;
-(NSData *)previewData;
-(unsigned long long)assetCount;
-(NSURL *)shareURL;
-(unsigned long long)photosCount;
-(NSData *)thumbnailImageData;
-(NSString *)scopeIdentifier;
-(unsigned short)trashedState;
-(unsigned long long)videosCount;
-(void)publishWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldNotifyOnUploadCompletion;
-(BOOL)shouldIgnoreBudgets;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)shouldPromptUserToIgnoreBudgets;
-(BOOL)shouldSuggestShareBack;
-(void)acceptShareWithCompletion:(/*^block*/id)arg1 ;
-(void)forceSyncWithCompletion:(/*^block*/id)arg1 ;
-(short)publishState;
-(unsigned long long)uploadedPhotosCount;
-(unsigned long long)uploadedVideosCount;
@end


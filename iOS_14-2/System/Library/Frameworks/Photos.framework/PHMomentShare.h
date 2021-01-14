/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>
#import <libobjc.A.dylib/PHShare.h>

@class NSDate, PHMomentSharePreview, NSURL, NSData, NSString;

@interface PHMomentShare : PHAssetCollection <PHShare> {

	NSDate* _creationDate;
	PHMomentSharePreview* _preview;
	BOOL _shouldIgnoreBudgets;
	BOOL _shouldNotifyOnUploadCompletion;
	unsigned short _status;
	short _publicPermission;
	unsigned short _trashedState;
	short _publishState;
	NSURL* _shareURL;
	NSDate* _expiryDate;
	unsigned long long _assetCount;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	unsigned long long _uploadedPhotosCount;
	unsigned long long _uploadedVideosCount;
	NSData* _previewData;
	NSData* _thumbnailImageData;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) NSData * previewData;                                //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,readonly) NSData * thumbnailImageData;                         //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;                          //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount;                       //@synthesize assetCount=_assetCount - In the implementation block
@property (nonatomic,readonly) unsigned long long photosCount;                      //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long videosCount;                      //@synthesize videosCount=_videosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadedPhotosCount;              //@synthesize uploadedPhotosCount=_uploadedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadedVideosCount;              //@synthesize uploadedVideosCount=_uploadedVideosCount - In the implementation block
@property (nonatomic,readonly) PHMomentSharePreview * preview; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) BOOL shouldIgnoreBudgets;                            //@synthesize shouldIgnoreBudgets=_shouldIgnoreBudgets - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotifyOnUploadCompletion;                 //@synthesize shouldNotifyOnUploadCompletion=_shouldNotifyOnUploadCompletion - In the implementation block
@property (nonatomic,readonly) unsigned short status;                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) short publicPermission;                              //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,readonly) unsigned short trashedState;                         //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,readonly) short publishState;                                  //@synthesize publishState=_publishState - In the implementation block
@property (nonatomic,readonly) NSURL * shareURL;                                    //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                                 //@synthesize expiryDate=_expiryDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityKeyMap;
+(BOOL)managedObjectSupportsShareTrashedState;
+(id)fetchLocalMomentShareFromShareURL:(id)arg1 error:(id*)arg2 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsShareExpiredState;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fetchLocalMomentShareWithUUID:(id)arg1 error:(id*)arg2 ;
+(id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(unsigned long long)videosCount;
-(PHMomentSharePreview *)preview;
-(NSURL *)shareURL;
-(unsigned long long)photosCount;
-(short)publicPermission;
-(BOOL)shouldIgnoreBudgets;
-(BOOL)shouldNotifyOnUploadCompletion;
-(unsigned short)trashedState;
-(unsigned long long)assetCount;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSString *)description;
-(NSDate *)creationDate;
-(short)publishState;
-(NSData *)thumbnailImageData;
-(NSDate *)expiryDate;
-(BOOL)shouldPromptUserToIgnoreBudgets;
-(unsigned long long)uploadedPhotosCount;
-(BOOL)shouldSuggestShareBack;
-(void)acceptMomentShareWithCompletion:(/*^block*/id)arg1 ;
-(void)forceSyncMomentShareWithCompletion:(/*^block*/id)arg1 ;
-(void)publishMomentShareWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)uploadedVideosCount;
-(NSString *)scopeIdentifier;
-(NSData *)previewData;
-(unsigned short)status;
@end


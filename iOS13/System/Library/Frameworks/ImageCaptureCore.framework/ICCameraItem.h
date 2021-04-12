/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSMutableDictionary, NSDictionary;

@interface ICCameraItem : NSObject {

	BOOL _locked;
	BOOL _raw;
	BOOL _inTemporaryStore;
	BOOL _addedAfterContentCatalogCompleted;
	BOOL _hasThumbnail;
	BOOL _hasMetadata;
	unsigned _ptpObjectHandle;
	unsigned _objectHandle;
	ICCameraDevice* _device;
	ICCameraFolder* _parentFolder;
	NSString* _name;
	NSString* _UTI;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSMutableDictionary* _userData;
	CGImageRef _thumbnailIfAvailable;
	CGImageRef _largeThumbnailIfAvailable;
	NSDictionary* _metadataIfAvailable;
	/*^block*/id _completionBlock;
	/*^block*/id _completionBlock_deprecated;
	/*^block*/id _downloadCompletionBlock;
	unsigned long long _parentID;
	unsigned long long _ownerID;
	unsigned long long _twinID;
	unsigned long long _objectID;
	id _userObject;
	NSString* _relativeFileSystemPath;

}

@property (nonatomic,retain) ICCameraDevice * device;                                                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                                                                      //@synthesize UTI=_UTI - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                                                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                                                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userData;                                                                    //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) unsigned objectHandle;                                                                             //@synthesize objectHandle=_objectHandle - In the implementation block
@property (nonatomic,copy) NSString * fileSystemPath; 
@property (assign,getter=isLocked,nonatomic) BOOL locked;                                                                       //@synthesize locked=_locked - In the implementation block
@property (assign,getter=isRaw,nonatomic) BOOL raw;                                                                             //@synthesize raw=_raw - In the implementation block
@property (nonatomic,readonly) unsigned long long unsignedIntegerValue; 
@property (copy) id completionBlock;                                                                                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id completionBlock_deprecated;                                                                                 //@synthesize completionBlock_deprecated=_completionBlock_deprecated - In the implementation block
@property (copy) id downloadCompletionBlock;                                                                                    //@synthesize downloadCompletionBlock=_downloadCompletionBlock - In the implementation block
@property (readonly) unsigned long long parentID;                                                                               //@synthesize parentID=_parentID - In the implementation block
@property (readonly) unsigned long long ownerID;                                                                                //@synthesize ownerID=_ownerID - In the implementation block
@property (readonly) unsigned long long twinID;                                                                                 //@synthesize twinID=_twinID - In the implementation block
@property (readonly) unsigned long long objectID;                                                                               //@synthesize objectID=_objectID - In the implementation block
@property (readonly) BOOL hasThumbnail;                                                                                         //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (readonly) BOOL hasMetadata;                                                                                          //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (retain) id userObject;                                                                                               //@synthesize userObject=_userObject - In the implementation block
@property (nonatomic,retain) ICCameraFolder * parentFolder;                                                                     //@synthesize parentFolder=_parentFolder - In the implementation block
@property (readonly) NSString * relativeFileSystemPath;                                                                         //@synthesize relativeFileSystemPath=_relativeFileSystemPath - In the implementation block
@property (getter=isInTemporaryStore,nonatomic,readonly) BOOL inTemporaryStore;                                                 //@synthesize inTemporaryStore=_inTemporaryStore - In the implementation block
@property (nonatomic,readonly) CGImageRef thumbnail; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) unsigned ptpObjectHandle;                                                                        //@synthesize ptpObjectHandle=_ptpObjectHandle - In the implementation block
@property (getter=wasAddedAfterContentCatalogCompleted,nonatomic,readonly) BOOL addedAfterContentCatalogCompleted;              //@synthesize addedAfterContentCatalogCompleted=_addedAfterContentCatalogCompleted - In the implementation block
@property (readonly) CGImageRef thumbnailIfAvailable;                                                                           //@synthesize thumbnailIfAvailable=_thumbnailIfAvailable - In the implementation block
@property (readonly) CGImageRef largeThumbnailIfAvailable;                                                                      //@synthesize largeThumbnailIfAvailable=_largeThumbnailIfAvailable - In the implementation block
@property (readonly) NSDictionary * metadataIfAvailable;                                                                        //@synthesize metadataIfAvailable=_metadataIfAvailable - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)unsignedIntegerValue;
-(void)setName:(NSString *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)hasThumbnail;
-(NSDate *)modificationDate;
-(unsigned long long)objectID;
-(NSDate *)creationDate;
-(ICCameraDevice *)device;
-(NSDictionary *)metadata;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)UTI;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(void)setObjectID:(unsigned long long)arg1 ;
-(NSMutableDictionary *)userData;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
-(BOOL)hasMetadata;
-(void)setModificationDate:(NSDate *)arg1 ;
-(CGImageRef)thumbnail;
-(unsigned long long)parentID;
-(void)setParentID:(unsigned long long)arg1 ;
-(void)setDevice:(ICCameraDevice *)arg1 ;
-(unsigned)objectHandle;
-(void)setObjectHandle:(unsigned)arg1 ;
-(void)setTwinID:(unsigned long long)arg1 ;
-(BOOL)isRaw;
-(long long)compareCameraItem:(id)arg1 ;
-(unsigned long long)twinID;
-(void)setParentFolder:(ICCameraFolder *)arg1 ;
-(ICCameraFolder *)parentFolder;
-(void)setOwnerID:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)setUTI:(NSString *)arg1 ;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)appendToPath:(id)arg1 ;
-(NSString *)fileSystemPath;
-(void)setRaw:(BOOL)arg1 ;
-(BOOL)isInTemporaryStore;
-(unsigned)ptpObjectHandle;
-(BOOL)wasAddedAfterContentCatalogCompleted;
-(CGImageRef)thumbnailIfAvailable;
-(CGImageRef)largeThumbnailIfAvailable;
-(NSDictionary *)metadataIfAvailable;
-(id)completionBlock_deprecated;
-(void)setCompletionBlock_deprecated:(id)arg1 ;
-(id)downloadCompletionBlock;
-(void)setDownloadCompletionBlock:(id)arg1 ;
-(unsigned long long)ownerID;
-(id)userObject;
-(void)setUserObject:(id)arg1 ;
-(NSString *)relativeFileSystemPath;
@end


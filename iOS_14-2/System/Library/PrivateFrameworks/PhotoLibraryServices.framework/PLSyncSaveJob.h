/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray, NSURL, NSString, NSDate, NSSet, CLLocation, NSNumber;

@interface PLSyncSaveJob : NSObject {

	BOOL hasVideoComplement;
	BOOL isVideo;
	BOOL isSyncComplete;
	BOOL _cleanupSyncState;
	NSArray* facesInfo;
	NSURL* originalAssetURL;
	NSURL* videoComplementURL;
	NSString* uuid;
	NSDate* creationDate;
	NSDate* modificationDate;
	NSSet* albumURIs;
	CLLocation* location;
	NSNumber* sortToken;
	NSString* originalFileName;
	NSDate* _cleanupBeforeDate;
	/*^block*/id _finishedBlock;

}

@property (nonatomic,retain) NSURL * originalAssetURL; 
@property (assign,nonatomic) BOOL hasVideoComplement; 
@property (nonatomic,retain) NSURL * videoComplementURL; 
@property (assign,nonatomic) BOOL isVideo; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSSet * albumURIs; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,retain) NSArray * facesInfo; 
@property (nonatomic,retain) NSNumber * sortToken; 
@property (nonatomic,retain) NSString * originalFileName; 
@property (assign,nonatomic) BOOL isSyncComplete; 
@property (assign,nonatomic) BOOL cleanupSyncState;                    //@synthesize cleanupSyncState=_cleanupSyncState - In the implementation block
@property (nonatomic,copy) NSDate * cleanupBeforeDate;                 //@synthesize cleanupBeforeDate=_cleanupBeforeDate - In the implementation block
@property (nonatomic,copy) id finishedBlock;                           //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(id)serializedData;
-(NSDate *)modificationDate;
-(NSString *)uuid;
-(NSNumber *)sortToken;
-(CLLocation *)location;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)hasVideoComplement;
-(id)description;
-(NSDate *)creationDate;
-(NSSet *)albumURIs;
-(BOOL)isVideo;
-(void)setFacesInfo:(NSArray *)arg1 ;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(void)setVideoComplementURL:(NSURL *)arg1 ;
-(void)setHasVideoComplement:(BOOL)arg1 ;
-(void)setAlbumURIs:(NSSet *)arg1 ;
-(void)setOriginalFileName:(NSString *)arg1 ;
-(void)setIsSyncComplete:(BOOL)arg1 ;
-(void)setCleanupSyncState:(BOOL)arg1 ;
-(void)setCleanupBeforeDate:(NSDate *)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSArray *)facesInfo;
-(void)setSortToken:(NSNumber *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)initFromSerializedData:(id)arg1 ;
-(void)processFacesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)originalFileName;
-(NSURL *)videoComplementURL;
-(BOOL)isSyncComplete;
-(NSURL *)originalAssetURL;
-(NSDate *)cleanupBeforeDate;
-(BOOL)cleanupSyncState;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)uuid;
-(NSDate *)modificationDate;
-(void)setUuid:(NSString *)arg1 ;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)isVideo;
-(void)setModificationDate:(NSDate *)arg1 ;
-(id)serializedData;
-(void)setSortToken:(NSNumber *)arg1 ;
-(NSNumber *)sortToken;
-(id)initFromSerializedData:(id)arg1 ;
-(NSSet *)albumURIs;
-(NSArray *)facesInfo;
-(void)processFacesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)originalFileName;
-(NSURL *)videoComplementURL;
-(BOOL)hasVideoComplement;
-(NSURL *)originalAssetURL;
-(BOOL)isSyncComplete;
-(NSDate *)cleanupBeforeDate;
-(BOOL)cleanupSyncState;
-(void)setFacesInfo:(NSArray *)arg1 ;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(void)setVideoComplementURL:(NSURL *)arg1 ;
-(void)setHasVideoComplement:(BOOL)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setAlbumURIs:(NSSet *)arg1 ;
-(void)setOriginalFileName:(NSString *)arg1 ;
-(void)setIsSyncComplete:(BOOL)arg1 ;
-(void)setCleanupSyncState:(BOOL)arg1 ;
-(void)setCleanupBeforeDate:(NSDate *)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
@end


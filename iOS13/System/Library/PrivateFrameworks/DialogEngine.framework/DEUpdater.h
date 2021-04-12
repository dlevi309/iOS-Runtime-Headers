/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSURL, NSDate, DEManifest, DEWorkQueues, DEUpdaterState, DEManifestSync;

@interface DEUpdater : NSObject {

	BOOL _disableManifestSync;
	BOOL _foregroundManifestSync;
	NSString* _distribution;
	NSURL* _publicationURL;
	NSDate* _publicationErrorTime;
	double _publicationErrorTTL;
	NSURL* _downloadBase;
	NSURL* _builtinDir;
	NSURL* _updateDir;
	NSURL* _storageBase;
	NSURL* _overlayBase;
	DEManifest* _builtinManifest;
	DEManifest* _latestManifest;
	DEWorkQueues* _queues;
	DEUpdaterState* _state;
	DEManifestSync* _manifestSync;

}

@property (nonatomic,retain) NSString * distribution;                    //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSURL * publicationURL;                     //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSDate * publicationErrorTime;              //@synthesize publicationErrorTime=_publicationErrorTime - In the implementation block
@property (assign,nonatomic) double publicationErrorTTL;                 //@synthesize publicationErrorTTL=_publicationErrorTTL - In the implementation block
@property (nonatomic,retain) NSURL * downloadBase;                       //@synthesize downloadBase=_downloadBase - In the implementation block
@property (nonatomic,retain) NSURL * builtinDir;                         //@synthesize builtinDir=_builtinDir - In the implementation block
@property (nonatomic,retain) NSURL * updateDir;                          //@synthesize updateDir=_updateDir - In the implementation block
@property (nonatomic,retain) NSURL * storageBase;                        //@synthesize storageBase=_storageBase - In the implementation block
@property (nonatomic,retain) NSURL * overlayBase;                        //@synthesize overlayBase=_overlayBase - In the implementation block
@property (nonatomic,retain) DEManifest * builtinManifest;               //@synthesize builtinManifest=_builtinManifest - In the implementation block
@property (nonatomic,retain) DEManifest * latestManifest;                //@synthesize latestManifest=_latestManifest - In the implementation block
@property (nonatomic,retain) DEWorkQueues * queues;                      //@synthesize queues=_queues - In the implementation block
@property (nonatomic,retain) DEUpdaterState * state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) DEManifestSync * manifestSync;              //@synthesize manifestSync=_manifestSync - In the implementation block
@property (assign,nonatomic) BOOL disableManifestSync;                   //@synthesize disableManifestSync=_disableManifestSync - In the implementation block
@property (assign,nonatomic) BOOL foregroundManifestSync;                //@synthesize foregroundManifestSync=_foregroundManifestSync - In the implementation block
+(BOOL)copyFrom:(id)arg1 to:(id)arg2 ;
+(id)loadPublication:(id)arg1 ;
+(id)getUpdateDirFor:(id)arg1 ;
+(void)remove:(id)arg1 from:(id)arg2 ;
+(id)clientReleaseForUpdater;
+(BOOL)package:(id)arg1 to:(id)arg2 includePrefixes:(id)arg3 excludePrefixes:(id)arg4 includeSuffixes:(id)arg5 excludeSuffixes:(id)arg6 overrides:(id)arg7 keyId:(unsigned long long)arg8 multipart:(BOOL)arg9 updating:(id)arg10 ;
+(BOOL)prepareDistribution:(id)arg1 withManifestDir:(id)arg2 disabled:(BOOL)arg3 in:(id)arg4 keyId:(unsigned long long)arg5 multipart:(BOOL)arg6 ;
+(id)appendPublicationName:(id)arg1 ;
-(id)init;
-(DEUpdaterState *)state;
-(void)setState:(DEUpdaterState *)arg1 ;
-(void)sync;
-(void)setDistribution:(NSString *)arg1 ;
-(NSString *)distribution;
-(BOOL)loadState;
-(BOOL)resetState;
-(BOOL)saveState;
-(void)setQueues:(DEWorkQueues *)arg1 ;
-(DEWorkQueues *)queues;
-(id)getVersionFor:(id)arg1 encryptedVersion:(id*)arg2 ;
-(DEManifest *)builtinManifest;
-(DEManifest *)latestManifest;
-(void)removeFromOverlay:(id)arg1 ;
-(id)getStorageURLFor:(id)arg1 version:(id)arg2 ;
-(BOOL)linkToOverlay:(id)arg1 from:(id)arg2 replace:(BOOL)arg3 ;
-(BOOL)prepareBuiltinManifest;
-(id)chooseURLFor:(id)arg1 version:(id)arg2 versionFound:(BOOL*)arg3 ;
-(id)initWithDistribution:(id)arg1 publicationURL:(id)arg2 downloadBase:(id)arg3 builtinDir:(id)arg4 ;
-(NSURL *)builtinDir;
-(id)prepared:(id)arg1 version:(id)arg2 ;
-(void)checkOverlay:(id)arg1 version:(id)arg2 ;
-(id)getDownloadURLFor:(id)arg1 encryptedVersion:(id)arg2 ;
-(id)store:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 from:(id)arg4 src:(id)arg5 ;
-(id)getVersionFor:(id)arg1 ;
-(void)unorderedPrepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkOnlyIfLatest:(BOOL)arg4 publication:(id)arg5 block:(/*^block*/id)arg6 ;
-(void)setManifestSync:(DEManifestSync *)arg1 ;
-(void)setPublicationErrorTime:(NSDate *)arg1 ;
-(void)setLatestManifest:(DEManifest *)arg1 ;
-(void)prepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkOnlyIfLatest:(BOOL)arg4 publication:(id)arg5 block:(/*^block*/id)arg6 ;
-(void)unorderedUpdate:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)findLocally:(id)arg1 status:(id*)arg2 ;
-(void)findLocally:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)update:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)find:(id)arg1 downloadType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)find:(id)arg1 downloadType:(unsigned long long)arg2 status:(id*)arg3 ;
-(id)initPlaceholder;
-(void)removeFromStorage:(id)arg1 ;
-(void)find:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)find:(id)arg1 status:(id*)arg2 ;
-(NSURL *)publicationURL;
-(void)setPublicationURL:(NSURL *)arg1 ;
-(NSDate *)publicationErrorTime;
-(double)publicationErrorTTL;
-(void)setPublicationErrorTTL:(double)arg1 ;
-(NSURL *)downloadBase;
-(void)setDownloadBase:(NSURL *)arg1 ;
-(void)setBuiltinDir:(NSURL *)arg1 ;
-(NSURL *)updateDir;
-(void)setUpdateDir:(NSURL *)arg1 ;
-(NSURL *)storageBase;
-(void)setStorageBase:(NSURL *)arg1 ;
-(NSURL *)overlayBase;
-(void)setOverlayBase:(NSURL *)arg1 ;
-(void)setBuiltinManifest:(DEManifest *)arg1 ;
-(DEManifestSync *)manifestSync;
-(BOOL)disableManifestSync;
-(void)setDisableManifestSync:(BOOL)arg1 ;
-(BOOL)foregroundManifestSync;
-(void)setForegroundManifestSync:(BOOL)arg1 ;
@end


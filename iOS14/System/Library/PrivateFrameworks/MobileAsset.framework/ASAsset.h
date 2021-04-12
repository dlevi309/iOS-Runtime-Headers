/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


#import <MobileAsset/MobileAsset-Structs.h>
@class NSString, NSDictionary, NSDate, NSURL;

@interface ASAsset : NSObject {

	NSString* _assetType;
	NSDictionary* _attributes;
	NSDictionary* _downloadOptions;
	NSString* _clientName;
	NSString* _identifier;
	/*^block*/id _progressHandler;
	_MobileAsset* _cfAsset;
	BOOL _userInitiatedDownload;

}

@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,readonly) NSDictionary * fullAttributes; 
@property (nonatomic,retain) NSDictionary * downloadOptions;                   //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                           //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSDate * installDate; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (assign,nonatomic) long long garbageCollectionBehavior; 
@property (nonatomic,copy) id progressHandler;                                 //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) BOOL userInitiatedDownload;                       //@synthesize userInitiatedDownload=_userInitiatedDownload - In the implementation block
+(BOOL)nonUserInitiatedDownloadsAllowed;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)assetType;
-(void)purge:(/*^block*/id)arg1 ;
-(NSString *)clientName;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(NSURL *)localURL;
-(NSDate *)installDate;
-(id)assetServerUrl;
-(id)_getLocalAttribute:(id)arg1 ;
-(long long)assetStateForStateString:(id)arg1 ;
-(_MobileAsset*)mobileAsset;
-(BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3 ;
-(void)setDownloadOptions:(NSDictionary *)arg1 ;
-(BOOL)userInitiatedDownload;
-(void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2 ;
-(BOOL)pauseDownloadAndReturnError:(id*)arg1 ;
-(BOOL)resumeDownloadAndReturnError:(id*)arg1 ;
-(BOOL)cancelDownloadAndReturnError:(id*)arg1 ;
-(BOOL)purgeAndReturnError:(id*)arg1 ;
-(id)systemAppServerUrl;
-(long long)garbageCollectionBehavior;
-(void)setGarbageCollectionBehavior:(long long)arg1 ;
-(BOOL)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2 ;
-(void)adjustDownloadOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginDownloadWithOptions:(id)arg1 ;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
-(NSDictionary *)downloadOptions;
-(void)setUserInitiatedDownload:(BOOL)arg1 ;
-(id)initWithAssetType:(id)arg1 attributes:(id)arg2 ;
-(NSDictionary *)fullAttributes;
-(BOOL)isPresentOnDisk;
-(NSDictionary *)attributes;
-(id)description;
-(void)setProgressHandler:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(id)progressHandler;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


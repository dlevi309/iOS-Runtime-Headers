/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHImportSource.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, NSArray, NSMutableDictionary;

@interface PHImportUrlSource : PHImportSource {

	NSObject*<OS_dispatch_queue> _pendingAssetDataRequestQueue;
	NSObject*<OS_dispatch_queue> _activeAssetDataRequestQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentAssetDataRequestSemaphore;
	BOOL _isReadonlyVolume;
	NSString* _prefix;
	NSArray* _urls;
	NSMutableDictionary* _pathsByFileBaseName;
	NSArray* _baseNames;
	NSObject*<OS_dispatch_queue> _pathsByFileBaseNameAccess;

}

@property (nonatomic,retain) NSArray * urls;                                                      //@synthesize urls=_urls - In the implementation block
@property (assign,nonatomic) BOOL isReadonlyVolume;                                               //@synthesize isReadonlyVolume=_isReadonlyVolume - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathsByFileBaseName;                           //@synthesize pathsByFileBaseName=_pathsByFileBaseName - In the implementation block
@property (nonatomic,retain) NSArray * baseNames;                                                 //@synthesize baseNames=_baseNames - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pathsByFileBaseNameAccess;              //@synthesize pathsByFileBaseNameAccess=_pathsByFileBaseNameAccess - In the implementation block
+(BOOL)treatAsReadonlyVolume:(id)arg1 ;
-(NSArray *)urls;
-(BOOL)isAvailable;
-(id)prefix;
-(void)setUrls:(NSArray *)arg1 ;
-(id)path;
-(void)endWork;
-(id)name;
-(void)beginWork;
-(NSArray *)baseNames;
-(id)volumePath;
-(id)productKind;
-(id)initWithUrls:(id)arg1 ;
-(void)setPrefix:(id)arg1 ;
-(void)setBaseNames:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToImportUrlSource:(id)arg1 ;
-(id)assetsByProcessingItem:(id)arg1 ;
-(void)dispatchAssetDataRequestAsyncUsingBlock:(/*^block*/id)arg1 ;
-(id)rootUrlOfUrls:(id)arg1 ;
-(BOOL)isReadonlyVolume;
-(void)setIsReadonlyVolume:(BOOL)arg1 ;
-(NSMutableDictionary *)pathsByFileBaseName;
-(void)setPathsByFileBaseName:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pathsByFileBaseNameAccess;
-(void)setPathsByFileBaseNameAccess:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)canReference;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


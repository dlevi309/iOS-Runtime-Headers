/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)path;
-(BOOL)isAvailable;
-(id)prefix;
-(void)setPrefix:(id)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)volumePath;
-(id)productKind;
-(BOOL)canReference;
-(id)initWithUrls:(id)arg1 ;
-(BOOL)isEqualToImportUrlSource:(id)arg1 ;
-(void)beginWork;
-(id)assetsByProcessingItem:(id)arg1 ;
-(void)endWork;
-(void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)rootUrlOfUrls:(id)arg1 ;
-(BOOL)isReadonlyVolume;
-(void)setIsReadonlyVolume:(BOOL)arg1 ;
-(NSMutableDictionary *)pathsByFileBaseName;
-(void)setPathsByFileBaseName:(NSMutableDictionary *)arg1 ;
-(NSArray *)baseNames;
-(void)setBaseNames:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pathsByFileBaseNameAccess;
-(void)setPathsByFileBaseNameAccess:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


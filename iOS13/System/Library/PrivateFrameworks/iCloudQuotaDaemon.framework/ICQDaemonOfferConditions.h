/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/

#import <iCloudQuotaDaemon/iCloudQuotaDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying> {

	BOOL _deviceStorageAlmostFull;
	BOOL _photosCloudEnabled;
	BOOL _photosOptimizeEnabled;
	NSNumber* _photosLibrarySize;

}

@property (assign,getter=isDeviceStorageAlmostFull,nonatomic) BOOL deviceStorageAlmostFull;              //@synthesize deviceStorageAlmostFull=_deviceStorageAlmostFull - In the implementation block
@property (assign,getter=isPhotosCloudEnabled,nonatomic) BOOL photosCloudEnabled;                        //@synthesize photosCloudEnabled=_photosCloudEnabled - In the implementation block
@property (assign,getter=isPhotosOptimizeEnabled,nonatomic) BOOL photosOptimizeEnabled;                  //@synthesize photosOptimizeEnabled=_photosOptimizeEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * photosLibrarySize;                                                 //@synthesize photosLibrarySize=_photosLibrarySize - In the implementation block
+(id)currentConditions;
+(BOOL)isDeviceStorageAlmostFull;
+(BOOL)isPhotosCloudEnabled;
+(BOOL)isPhotosOptimizeEnabled;
+(id)photosLibrarySize;
+(BOOL)isSimulatedDeviceStorageAlmostFull;
+(void)getPhotosLibrarySizeWithCompletion:(/*^block*/id)arg1 ;
+(void)getPhotosLibraryUploadSizeWithCompletion:(/*^block*/id)arg1 ;
+(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
+(BOOL)hasPhotosCloudEverBeenEnabled;
+(id)photosLibraryUploadSize;
+(id)photosVideosCount;
+(BOOL)isDeviceStorageNearLowButNotLow;
+(BOOL)isCachedCloudQuotaAlmostFullOrFull;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCurrentConditions;
-(BOOL)isDeviceStorageAlmostFull;
-(void)setDeviceStorageAlmostFull:(BOOL)arg1 ;
-(BOOL)isPhotosCloudEnabled;
-(void)setPhotosCloudEnabled:(BOOL)arg1 ;
-(BOOL)isPhotosOptimizeEnabled;
-(void)setPhotosOptimizeEnabled:(BOOL)arg1 ;
-(NSNumber *)photosLibrarySize;
-(void)setPhotosLibrarySize:(NSNumber *)arg1 ;
@end


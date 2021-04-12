/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)photosLibrarySize;
+(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
+(BOOL)isSimulatedDeviceStorageAlmostFull;
+(BOOL)isPhotosCloudEnabled;
+(BOOL)isPhotosOptimizeEnabled;
+(void)getPhotosLibrarySizeWithCompletion:(/*^block*/id)arg1 ;
+(void)getPhotosLibraryUploadSizeWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)hasPhotosCloudEverBeenEnabled;
+(id)photosLibraryUploadSize;
+(id)photosVideosCount;
+(BOOL)isDeviceStorageNearLowButNotLow;
+(BOOL)isCachedCloudQuotaAlmostFullOrFull;
-(BOOL)isDeviceStorageAlmostFull;
-(NSNumber *)photosLibrarySize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCurrentConditions;
-(void)setDeviceStorageAlmostFull:(BOOL)arg1 ;
-(BOOL)isPhotosCloudEnabled;
-(void)setPhotosCloudEnabled:(BOOL)arg1 ;
-(BOOL)isPhotosOptimizeEnabled;
-(void)setPhotosOptimizeEnabled:(BOOL)arg1 ;
-(void)setPhotosLibrarySize:(NSNumber *)arg1 ;
@end


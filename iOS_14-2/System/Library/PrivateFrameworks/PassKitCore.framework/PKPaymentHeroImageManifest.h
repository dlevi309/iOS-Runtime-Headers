/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject {

	NSDictionary* _images;

}

@property (nonatomic,readonly) NSDictionary * images;              //@synthesize images=_images - In the implementation block
+(id)manifestFileForRegion:(id)arg1 ;
+(void)removeManifestFileForRegion:(id)arg1 ;
+(void)downloadManifestForRegion:(id)arg1 url:(id)arg2 fileDownloader:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)manifestForRegion:(id)arg1 ;
+(BOOL)manifestFileExistsForRegion:(id)arg1 ;
+(void)saveManifestDataToDeviceForRegion:(id)arg1 data:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)images;
@end


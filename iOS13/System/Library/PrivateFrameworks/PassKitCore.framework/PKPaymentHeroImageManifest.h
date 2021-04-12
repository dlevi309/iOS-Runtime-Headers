/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject {

	NSDictionary* _images;

}

@property (nonatomic,readonly) NSDictionary * images;              //@synthesize images=_images - In the implementation block
+(id)manifestFileForRegion:(id)arg1 ;
+(void)saveManifestDataToDeviceForRegion:(id)arg1 data:(id)arg2 ;
+(BOOL)manifestFileExistsForRegion:(id)arg1 ;
+(void)removeManifestFileForRegion:(id)arg1 ;
+(id)manifestForRegion:(id)arg1 ;
+(void)downloadManifestForRegion:(id)arg1 url:(id)arg2 fileDownloader:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)images;
@end


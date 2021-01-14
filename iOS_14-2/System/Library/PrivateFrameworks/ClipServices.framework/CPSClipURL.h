/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@class NSURL;

@interface CPSClipURL : NSObject {

	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
+(BOOL)isSupported;
+(BOOL)shouldStallProgress;
+(BOOL)usesDemoMetadata;
+(void)stopStallingCurrentInstallationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)checkAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prewarmClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPrewarmingClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchClipMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)test_uninstallClipWithCompletionHandler:(/*^block*/id)arg1 ;
@end


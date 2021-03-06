/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@interface SSScreenshotMetadataHarvester : NSObject
+(void)harvestScreenshotMetadataAndRespondToAction:(id)arg1 ;
+(void)_crawlViewController:(id)arg1 executingBlock:(/*^block*/id)arg2 ;
+(void)_crawlView:(id)arg1 executingBlock:(/*^block*/id)arg2 ;
+(id)_screenshotServiceForWindowScene:(id)arg1 wantsPrivateDelegate:(BOOL)arg2 ;
+(id)_applicationScreenshotServiceWithPrivateDelegate:(BOOL)arg1 ;
+(id)screenshotServiceWithIdentifier:(id)arg1 ;
+(id)_screenshotServicesDelegateWithIdentifier:(id)arg1 ;
+(id)_contentRectsForMetadata;
+(BOOL)canGenerateDocumentForIdentifier:(id)arg1 ;
+(void)sendResponseForAction:(id)arg1 withObject:(id)arg2 forKey:(unsigned long long)arg3 ;
+(void)_grabUserActivityTitleWithCallback:(/*^block*/id)arg1 ;
+(void)_grabPDFRepresentationForIdentifier:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end


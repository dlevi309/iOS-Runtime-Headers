/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@protocol SSScreenshotAssetManagerBackend;
@interface SSScreenshotAssetManager : NSObject {

	id<SSScreenshotAssetManagerBackend> _backend;

}
+(id)sharedAssetManager;
-(id)backend;
-(void)setBackend:(id)arg1 ;
-(void)resetBackend;
-(void)registerImageForPersistable:(id)arg1 options:(id)arg2 withRegistrationBlock:(/*^block*/id)arg3 ;
-(void)imageWithPreviouslyRegisteredIdentifier:(id)arg1 withAccessBlock:(/*^block*/id)arg2 ;
-(void)recordEditsToPersistable:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)recordPersistableToTemporaryLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removePersistable:(id)arg1 deleteOptions:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)recordEditsToPersistableForPDF:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end


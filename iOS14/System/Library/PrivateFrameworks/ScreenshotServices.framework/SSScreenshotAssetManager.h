/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@protocol SSScreenshotAssetManagerBackend;
@interface SSScreenshotAssetManager : NSObject {

	id<SSScreenshotAssetManagerBackend> _backend;

}
+(id)sharedAssetManager;
-(void)setBackend:(id)arg1 ;
-(id)backend;
-(void)resetBackend;
-(void)registerImageForPersistable:(id)arg1 options:(id)arg2 withRegistrationBlock:(/*^block*/id)arg3 ;
-(void)imageWithPreviouslyRegisteredIdentifier:(id)arg1 withAccessBlock:(/*^block*/id)arg2 ;
-(void)recordEditsToPersistable:(id)arg1 inTransition:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)recordPersistableToTemporaryLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removePersistable:(id)arg1 deleteOptions:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)recordEditsToPersistableForPDF:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end


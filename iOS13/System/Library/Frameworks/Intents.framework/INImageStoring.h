/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol INImageStoring <INImageServing>
@optional
-(id)storeImageSynchronously:(id)arg1 error:(id*)arg2;
-(id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id*)arg2;

@required
-(BOOL)canStoreImage:(id)arg1;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end


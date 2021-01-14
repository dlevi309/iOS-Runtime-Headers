/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol INImageStoring <INImageServing>
@optional
-(id)storeImageSynchronously:(id)arg1 error:(id*)arg2;
-(id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id*)arg2;

@required
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)canStoreImage:(id)arg1;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end


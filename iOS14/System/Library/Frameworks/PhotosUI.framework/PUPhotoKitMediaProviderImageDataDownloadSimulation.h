/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSData, NSString, NSDictionary;

@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {

	/*^block*/id _externalProgressHandler;
	/*^block*/id _internalProgressHandler;
	/*^block*/id _externalResultHandler;
	/*^block*/id _internalResultHandler;
	NSData* __resultImageData;
	NSString* __resultDataUTI;
	long long __resultOrientaton;
	NSDictionary* __resultInfo;

}

@property (setter=_setResultImageData:,nonatomic,retain) NSData * _resultImageData;                  //@synthesize _resultImageData=__resultImageData - In the implementation block
@property (setter=_setResultDataUTI:,nonatomic,retain) NSString * _resultDataUTI;                    //@synthesize _resultDataUTI=__resultDataUTI - In the implementation block
@property (assign,setter=_setResultOrientation:,nonatomic) long long _resultOrientaton;              //@synthesize _resultOrientaton=__resultOrientaton - In the implementation block
@property (setter=_setResultInfo:,nonatomic,copy) NSDictionary * _resultInfo;                        //@synthesize _resultInfo=__resultInfo - In the implementation block
@property (nonatomic,copy) id externalProgressHandler;                                               //@synthesize externalProgressHandler=_externalProgressHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalProgressHandler;                                      //@synthesize internalProgressHandler=_internalProgressHandler - In the implementation block
@property (nonatomic,copy) id externalResultHandler;                                                 //@synthesize externalResultHandler=_externalResultHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalResultHandler;                                        //@synthesize internalResultHandler=_internalResultHandler - In the implementation block
-(id)init;
-(NSDictionary *)_resultInfo;
-(id)internalResultHandler;
-(id)internalProgressHandler;
-(void)setExternalResultHandler:(id)arg1 ;
-(void)setExternalProgressHandler:(id)arg1 ;
-(void)updateSimulationWithProgress:(double)arg1 ;
-(void)endSimulationWithError:(id)arg1 ;
-(id)externalProgressHandler;
-(id)externalResultHandler;
-(void)_setResultInfo:(id)arg1 ;
-(void)_handleResultImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4 ;
-(NSData *)_resultImageData;
-(void)_setResultImageData:(id)arg1 ;
-(NSString *)_resultDataUTI;
-(void)_setResultDataUTI:(id)arg1 ;
-(long long)_resultOrientaton;
-(void)_setResultOrientation:(long long)arg1 ;
@end


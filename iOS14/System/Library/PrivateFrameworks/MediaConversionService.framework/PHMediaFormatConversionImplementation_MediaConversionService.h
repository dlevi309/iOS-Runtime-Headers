/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <libobjc.A.dylib/PHMediaFormatConversionImplementation.h>

@class NSSet, PAVideoConversionServiceClient, PAImageConversionServiceClient, NSString;

@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject <PHMediaFormatConversionImplementation> {

	PAVideoConversionServiceClient* _videoConversionServiceClient;
	PAImageConversionServiceClient* _imageConversionServiceClient;

}

@property (retain) PAVideoConversionServiceClient * videoConversionServiceClient;              //@synthesize videoConversionServiceClient=_videoConversionServiceClient - In the implementation block
@property (retain) PAImageConversionServiceClient * imageConversionServiceClient;              //@synthesize imageConversionServiceClient=_imageConversionServiceClient - In the implementation block
@property (readonly) long long transferBehaviorUserPreference; 
@property (readonly) NSSet * ut_objectsToBeDeallocatedWithReceiver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setImageConversionServiceClient:(PAImageConversionServiceClient *)arg1 ;
-(void)setVideoConversionServiceClient:(PAVideoConversionServiceClient *)arg1 ;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(void)dealloc;
-(long long)transferBehaviorUserPreference;
-(void)performConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSSet *)ut_objectsToBeDeallocatedWithReceiver;
-(void)performVideoConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)submitNonSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)submitSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)applyCommonOptionsFromVideoRequest:(id)arg1 toOptions:(id)arg2 ;
-(void)performImageConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applyCommonOptionsFromRequest:(id)arg1 toOptions:(id)arg2 ;
@end


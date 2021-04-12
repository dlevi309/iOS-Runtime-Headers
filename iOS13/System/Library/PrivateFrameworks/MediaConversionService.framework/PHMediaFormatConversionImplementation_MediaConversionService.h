/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long transferBehaviorUserPreference; 
@property (readonly) NSSet * ut_objectsToBeDeallocatedWithReceiver; 
-(id)init;
-(void)dealloc;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(void)setImageConversionServiceClient:(PAImageConversionServiceClient *)arg1 ;
-(void)setVideoConversionServiceClient:(PAVideoConversionServiceClient *)arg1 ;
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


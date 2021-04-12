/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSString;

@interface AXMImageCaptionModel : NSObject {

	NSString* _preferredModelName;

}
-(void)evaluate:(id)arg1 ;
-(id)_sceneObservationsWithRequestHandler:(id)arg1 error:(id*)arg2 ;
-(id)_stringForTokenIndex:(long long)arg1 tokens:(id)arg2 ;
-(id)_captionWithRequestHandler:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(id)_tokenizerDictionary:(id*)arg1 ;
-(id)_imageFeatureVectorWithRequestHandler:(id)arg1 error:(id*)arg2 ;
-(id)_stringForNextWordTensor:(id)arg1 tokens:(id)arg2 ;
-(id)_captionWithRequestHandler:(id)arg1 modelName:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelName:(id)arg1 ;
-(id)_captionWithRequestHandler:(id)arg1 usingExternalModelAtURL:(id)arg2 error:(id*)arg3 ;
@end


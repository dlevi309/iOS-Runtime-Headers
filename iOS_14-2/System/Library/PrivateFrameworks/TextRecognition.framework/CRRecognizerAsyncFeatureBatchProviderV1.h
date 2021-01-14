/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/CRRecognizerFeatureProviding.h>

@protocol CRTextRecognizerModelInputProvider;
@class NSObject, CRRecognizerConfiguration, NSString;

@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding> {

	NSObject*<CRTextRecognizerModelInputProvider> _inputProvider;
	CRRecognizerConfiguration* _configuration;

}

@property (retain) NSObject*<CRTextRecognizerModelInputProvider> inputProvider;              //@synthesize inputProvider=_inputProvider - In the implementation block
@property (retain) CRRecognizerConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRRecognizerConfiguration *)configuration;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(NSObject*<CRTextRecognizerModelInputProvider>)inputProvider;
-(void)setInputProvider:(NSObject*<CRTextRecognizerModelInputProvider>)arg1 ;
-(void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3 ;
-(long long)_indexOfBestModelForAspectRatio:(float)arg1 ;
-(id)combinedLineFeature:(id)arg1 lineFeature:(id)arg2 ;
@end


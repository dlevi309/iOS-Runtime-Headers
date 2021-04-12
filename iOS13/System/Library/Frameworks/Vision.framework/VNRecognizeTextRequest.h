/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNRequestProgressProviding.h>

@class NSArray, NSString;

@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding> {

	BOOL indeterminate;
	/*^block*/id progressHandler;

}

@property (nonatomic,copy) NSArray * recognitionLanguages; 
@property (nonatomic,copy) NSArray * customWords; 
@property (assign,nonatomic) long long recognitionLevel; 
@property (assign,nonatomic) BOOL usesLanguageCorrection; 
@property (assign,nonatomic) float minimumTextHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id progressHandler; 
@property (readonly) BOOL indeterminate; 
+(Class)configurationClass;
+(id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)hasCancellationHook;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSArray *)recognitionLanguages;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(NSArray *)customWords;
-(void)setCustomWords:(NSArray *)arg1 ;
-(long long)recognitionLevel;
-(void)setRecognitionLevel:(long long)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(float)minimumTextHeight;
-(void)setMinimumTextHeight:(float)arg1 ;
-(BOOL)indeterminate;
@end


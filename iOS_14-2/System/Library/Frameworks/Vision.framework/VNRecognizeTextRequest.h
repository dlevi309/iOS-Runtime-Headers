/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
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
@property (nonatomic,copy) id progressHandler; 
@property (readonly) BOOL indeterminate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id*)arg3 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(long long)recognitionLevel;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)setRecognitionLevel:(long long)arg1 ;
-(void)setMinimumTextHeight:(float)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(NSArray *)recognitionLanguages;
-(NSArray *)customWords;
-(void)setCustomWords:(NSArray *)arg1 ;
-(float)minimumTextHeight;
-(BOOL)indeterminate;
-(BOOL)hasCancellationHook;
-(id)progressHandler;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end


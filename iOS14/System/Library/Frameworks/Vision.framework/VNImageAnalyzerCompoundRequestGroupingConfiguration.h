/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {

	NSMutableArray* _originalRequests;
	NSMutableDictionary* _kindToOriginalRequestsMapping;
	NSMutableDictionary* _detectorConfigurationOptions;

}
-(id)init;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2 ;
-(id)detectorConfigurationOptions;
-(void)enumerateOriginalRequestsByKindUsingBlock:(/*^block*/id)arg1 ;
-(id)processingDevice;
-(id)originalRequests;
-(BOOL)preferBackgroundProcessing;
@end


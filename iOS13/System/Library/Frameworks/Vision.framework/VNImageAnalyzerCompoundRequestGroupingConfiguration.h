/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {

	NSMutableArray* _originalRequests;
	NSMutableDictionary* _kindToOriginalRequestsMapping;
	NSMutableDictionary* _detectorConfigurationOptions;

}
-(id)init;
-(id)originalRequests;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2 ;
-(id)detectorConfigurationOptions;
-(void)enumerateOriginalRequestsByKindUsingBlock:(/*^block*/id)arg1 ;
-(id)processingDevice;
-(BOOL)preferBackgroundProcessing;
@end


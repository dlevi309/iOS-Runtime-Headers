/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {

	BOOL _cancel;
	BOOL _noResultStrip;
	NSURL* _assetURL;
	NSURL* _pairedAssetURL;
	unsigned long long _analysisTypes;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}
+(id)taskForURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)run;
-(float)resourceRequirement;
-(void)cancel;
-(id)initWithURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end


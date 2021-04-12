/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class NSString;

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	double _videoScoreThresholdToBeInteresting;
	double _videoScoreThresholdToNotBeJunk;
	double _autoplaySuggestionScoreThresholdToBeInteresting;
	double _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;

}

@property (readonly) double videoScoreThresholdToBeInteresting;                                     //@synthesize videoScoreThresholdToBeInteresting=_videoScoreThresholdToBeInteresting - In the implementation block
@property (readonly) double videoScoreThresholdToNotBeJunk;                                         //@synthesize videoScoreThresholdToNotBeJunk=_videoScoreThresholdToNotBeJunk - In the implementation block
@property (readonly) double autoplaySuggestionScoreThresholdToBeInteresting;                        //@synthesize autoplaySuggestionScoreThresholdToBeInteresting=_autoplaySuggestionScoreThresholdToBeInteresting - In the implementation block
@property (readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;              //@synthesize autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset=_autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset - In the implementation block
@property (readonly) unsigned long long version;                                                    //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;                                    //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)currentAnalyzerVersion;
+(unsigned long long)latestVersion;
-(void)setupVersion33;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(double)autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
-(double)videoScoreThresholdToNotBeJunk;
-(double)autoplaySuggestionScoreThresholdToBeInteresting;
-(unsigned long long)version;
-(double)videoScoreThresholdToBeInteresting;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/SNRequest.h>

@class AVAudioFile, NSString;

@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest> {

	AVAudioFile* _referenceAudioFile;
	double _overlapFactor;

}

@property (assign) double overlapFactor;                            //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createAnalyzerWithError:(id*)arg1 ;
-(double)overlapFactor;
-(void)setOverlapFactor:(double)arg1 ;
-(id)initWithAudioFile:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNDirectionOfArrivalEstimator, NSArray, NSString;

@interface SNEstimateDirectionOfArrivalRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNDirectionOfArrivalEstimator* _detector;
	NSArray* _spatialSpectrum;

}

@property (nonatomic,readonly) float azimuth; 
@property (nonatomic,readonly) NSArray * spatialSpectrum;                    //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(float)azimuth;
-(id<SNAnalyzing>)analyzer;
-(NSArray *)spatialSpectrum;
@end


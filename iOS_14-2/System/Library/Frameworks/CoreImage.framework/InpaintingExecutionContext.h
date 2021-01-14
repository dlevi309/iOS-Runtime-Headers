/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@class NSMutableArray, NSString;

@interface InpaintingExecutionContext : NSObject {

	NSMutableArray* processingResolutions;
	NSMutableArray* executionTimes;
	int _lastNumberOfTilesUsed;
	NSString* _lastModelResourceUsed;
	int _lastInpaintingModeUsed;

}

@property (assign) int lastNumberOfTilesUsed;                     //@synthesize lastNumberOfTilesUsed=_lastNumberOfTilesUsed - In the implementation block
@property (retain) NSString * lastModelResourceUsed;              //@synthesize lastModelResourceUsed=_lastModelResourceUsed - In the implementation block
@property (assign) int lastInpaintingModeUsed;                    //@synthesize lastInpaintingModeUsed=_lastInpaintingModeUsed - In the implementation block
-(id)init;
-(void)setLastInpaintingModeUsed:(int)arg1 ;
-(void)setLastNumberOfTilesUsed:(int)arg1 ;
-(int)filterProcessingCount;
-(id)CIImageProcessorDigestObject;
-(int)lastProcessingResolution;
-(double)lastExecutionTime;
-(void)appendProcessingResolution:(int)arg1 andTime:(double)arg2 ;
-(id)processingResolutionsLog;
-(id)executionTimesLog;
-(int)lastNumberOfTilesUsed;
-(NSString *)lastModelResourceUsed;
-(void)setLastModelResourceUsed:(NSString *)arg1 ;
-(int)lastInpaintingModeUsed;
-(void)dealloc;
@end


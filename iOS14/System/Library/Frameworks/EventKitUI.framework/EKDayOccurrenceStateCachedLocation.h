/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString;

@interface EKDayOccurrenceStateCachedLocation : NSObject {

	BOOL _originalOccurrenceLocationIsPrediction;
	BOOL _originalHasNewTimeProposed;
	NSString* _generatedLocationString;
	NSString* _originalOccurrenceLocation;
	NSString* _originalOccurrenceLocationWithoutPrediction;

}

@property (nonatomic,readonly) NSString * generatedLocationString;                                  //@synthesize generatedLocationString=_generatedLocationString - In the implementation block
@property (nonatomic,readonly) NSString * originalOccurrenceLocation;                               //@synthesize originalOccurrenceLocation=_originalOccurrenceLocation - In the implementation block
@property (nonatomic,readonly) NSString * originalOccurrenceLocationWithoutPrediction;              //@synthesize originalOccurrenceLocationWithoutPrediction=_originalOccurrenceLocationWithoutPrediction - In the implementation block
@property (nonatomic,readonly) BOOL originalOccurrenceLocationIsPrediction;                         //@synthesize originalOccurrenceLocationIsPrediction=_originalOccurrenceLocationIsPrediction - In the implementation block
@property (nonatomic,readonly) BOOL originalHasNewTimeProposed;                                     //@synthesize originalHasNewTimeProposed=_originalHasNewTimeProposed - In the implementation block
-(NSString *)originalOccurrenceLocationWithoutPrediction;
-(BOOL)originalOccurrenceLocationIsPrediction;
-(BOOL)originalHasNewTimeProposed;
-(NSString *)originalOccurrenceLocation;
-(NSString *)generatedLocationString;
-(id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(BOOL)arg4 originalHasNewTimeProposed:(BOOL)arg5 ;
@end


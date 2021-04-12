/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXLocationOfInterest, NSArray, NSDate;

@interface ATXLocationManagerState : NSObject <NSSecureCoding> {

	ATXLocationOfInterest* _currentLOI;
	ATXLocationOfInterest* _previousLOI;
	NSArray* _predictedNextLOIs;
	NSArray* _predictedExitTimes;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,retain) ATXLocationOfInterest * currentLOI;               //@synthesize currentLOI=_currentLOI - In the implementation block
@property (nonatomic,retain) ATXLocationOfInterest * previousLOI;              //@synthesize previousLOI=_previousLOI - In the implementation block
@property (nonatomic,retain) NSArray * predictedNextLOIs;                      //@synthesize predictedNextLOIs=_predictedNextLOIs - In the implementation block
@property (nonatomic,retain) NSArray * predictedExitTimes;                     //@synthesize predictedExitTimes=_predictedExitTimes - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)merge:(id)arg1 with:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)expirePreviousLOIBefore:(id)arg1 ;
-(ATXLocationOfInterest *)currentLOI;
-(void)setCurrentLOI:(ATXLocationOfInterest *)arg1 ;
-(ATXLocationOfInterest *)previousLOI;
-(void)setPreviousLOI:(ATXLocationOfInterest *)arg1 ;
-(NSArray *)predictedNextLOIs;
-(void)setPredictedNextLOIs:(NSArray *)arg1 ;
-(NSArray *)predictedExitTimes;
-(void)setPredictedExitTimes:(NSArray *)arg1 ;
@end


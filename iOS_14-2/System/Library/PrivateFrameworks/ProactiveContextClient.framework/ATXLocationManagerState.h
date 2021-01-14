/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXLocationOfInterest, NSArray, NSDate, ATXLocationManagerKnownLOIs, CLLocation;

@interface ATXLocationManagerState : NSObject <NSSecureCoding> {

	ATXLocationOfInterest* _currentLOI;
	ATXLocationOfInterest* _previousLOI;
	NSArray* _predictedNextLOIs;
	NSArray* _predictedExitTimes;
	NSDate* _lastUpdateDate;
	ATXLocationManagerKnownLOIs* _locationsOfInterest;

}

@property (nonatomic,retain) ATXLocationOfInterest * currentLOI;                               //@synthesize currentLOI=_currentLOI - In the implementation block
@property (nonatomic,retain) ATXLocationOfInterest * previousLOI;                              //@synthesize previousLOI=_previousLOI - In the implementation block
@property (nonatomic,retain) NSArray * predictedNextLOIs;                                      //@synthesize predictedNextLOIs=_predictedNextLOIs - In the implementation block
@property (nonatomic,retain) NSArray * predictedExitTimes;                                     //@synthesize predictedExitTimes=_predictedExitTimes - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,readonly) ATXLocationManagerKnownLOIs * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
@property (nonatomic,readonly) CLLocation * homeLOI; 
@property (nonatomic,readonly) CLLocation * workLOI; 
@property (nonatomic,readonly) CLLocation * schoolLOI; 
@property (nonatomic,readonly) CLLocation * gymLOI; 
+(BOOL)supportsSecureCoding;
+(id)merge:(id)arg1 with:(id)arg2 ;
-(NSDate *)lastUpdateDate;
-(ATXLocationManagerKnownLOIs *)locationsOfInterest;
-(void)setPreviousLOI:(ATXLocationOfInterest *)arg1 ;
-(CLLocation *)workLOI;
-(ATXLocationOfInterest *)currentLOI;
-(id)init;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)expirePreviousLOIBefore:(id)arg1 ;
-(void)setPredictedExitTimes:(NSArray *)arg1 ;
-(ATXLocationOfInterest *)previousLOI;
-(CLLocation *)gymLOI;
-(CLLocation *)homeLOI;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredictedNextLOIs:(NSArray *)arg1 ;
-(NSArray *)predictedExitTimes;
-(NSArray *)predictedNextLOIs;
-(CLLocation *)schoolLOI;
-(void)setCurrentLOI:(ATXLocationOfInterest *)arg1 ;
@end


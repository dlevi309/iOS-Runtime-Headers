/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject {

	double _logProbability;
	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (assign,nonatomic) double logProbability;                //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                   //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;                    //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSNumber * outputType; 
-(id)init;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(id)description;
-(NSNumber *)outputType;
-(BOOL)noVisit;
-(NSDate *)entryDate;
-(void)setExitDate:(NSDate *)arg1 ;
-(void)setLogProbability:(double)arg1 ;
-(double)logProbability;
-(id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3 ;
-(BOOL)partialVisit;
-(BOOL)completeVisit;
@end


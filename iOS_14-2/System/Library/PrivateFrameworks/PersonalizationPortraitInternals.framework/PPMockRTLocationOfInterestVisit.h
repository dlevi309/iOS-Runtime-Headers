/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSDate;

@interface PPMockRTLocationOfInterestVisit : NSObject {

	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (nonatomic,retain) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;               //@synthesize exitDate=_exitDate - In the implementation block
+(id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 ;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(NSDate *)entryDate;
-(void)setExitDate:(NSDate *)arg1 ;
@end


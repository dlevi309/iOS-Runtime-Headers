/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate;


@protocol GEOTransitDepartureFrequency <NSObject>
@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) long long frequencyType; 
@property (nonatomic,readonly) BOOL isEstimate; 
@property (nonatomic,readonly) long long displayFrequency; 
@property (nonatomic,readonly) long long minFrequency; 
@property (nonatomic,readonly) long long maxFrequency; 
@required
-(NSDate *)firstTimeInFrequency;
-(BOOL)isValidAtDate:(id)arg1;
-(double)frequencyForSorting;
-(long long)minFrequency;
-(long long)maxFrequency;
-(long long)frequencyType;
-(NSDate *)lastTimeInFrequency;
-(long long)displayFrequency;
-(BOOL)isEstimate;

@end


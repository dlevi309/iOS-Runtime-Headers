/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSInputPeopleClue, NSMapTable, CLSMeaningClue;

@interface CLSClueCollection : NSObject {

	unsigned long long _versionCount;
	os_unfair_recursive_lock_s _recursiveLock;
	CLSInputPeopleClue* _mePersonClue;
	NSMapTable* _inputCluesByKey;
	NSMapTable* _outputCluesByKey;
	NSMapTable* _meaningCluesByKey;

}

@property (nonatomic,retain) CLSInputPeopleClue * mePersonClue;              //@synthesize mePersonClue=_mePersonClue - In the implementation block
@property (readonly) unsigned long long versionCount;                        //@synthesize versionCount=_versionCount - In the implementation block
@property (readonly) CLSMeaningClue * locationMobilityClue; 
-(id)init;
-(id)description;
-(double)timeInterval;
-(long long)year;
-(id)locations;
-(id)localStartDate;
-(id)localEndDate;
-(id)universalDates;
-(id)peopleNames;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)mePerson;
-(void)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_incrementVersionCount;
-(unsigned long long)versionCount;
-(id)localDates;
-(unsigned long long)numberOfDays;
-(id)inputCluesForKey:(id)arg1 ;
-(id)inputClues;
-(id)uniqueInputClues;
-(id)outputCluesForKey:(id)arg1 ;
-(id)uniqueOutputCluesForKey:(id)arg1 ;
-(id)outputCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueOutputClues;
-(id)outputClues;
-(BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)meaningClues;
-(id)uniqueMeaningClues;
-(id)meaningCluesForKey:(id)arg1 ;
-(id)uniqueMeaningCluesForKey:(id)arg1 ;
-(id)meaningCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(void)enumerateTimeOfDayClues:(/*^block*/id)arg1 ;
-(CLSMeaningClue *)locationMobilityClue;
-(void)enumerateTimeClues:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfTimes;
-(void)enumerateLocationClues:(/*^block*/id)arg1 ;
-(id)locationPlacemarks;
-(id)locationRegions;
-(id)locationRegionsInPlacemarks;
-(unsigned long long)numberOfLocations;
-(void)enumeratePeopleClues:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfPersons;
-(void)_mergeInputClue:(id)arg1 ;
-(void)_mergeOutputClue:(id)arg1 ;
-(void)_mergeMeaningClue:(id)arg1 ;
-(void)mergeClues:(id)arg1 ;
-(id)peopleDescription;
-(id)peopleDescriptionWithoutPeople:(id)arg1 ;
-(CLSInputPeopleClue *)mePersonClue;
-(void)setMePersonClue:(CLSInputPeopleClue *)arg1 ;
@end


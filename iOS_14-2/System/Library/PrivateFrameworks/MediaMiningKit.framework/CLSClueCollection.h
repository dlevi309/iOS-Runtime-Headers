/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)locations;
-(unsigned long long)numberOfDays;
-(id)localDates;
-(id)universalEndDate;
-(long long)year;
-(id)inputClues;
-(id)localStartDate;
-(id)universalDates;
-(void)_incrementVersionCount;
-(id)localEndDate;
-(id)uniqueOutputClues;
-(id)outputCluesForKey:(id)arg1 ;
-(id)init;
-(id)locationPlacemarks;
-(id)universalStartDate;
-(id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2 ;
-(double)timeInterval;
-(BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)peopleNames;
-(CLSInputPeopleClue *)mePersonClue;
-(id)outputCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueMeaningCluesForKey:(id)arg1 ;
-(unsigned long long)numberOfTimes;
-(BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(unsigned long long)versionCount;
-(id)description;
-(void)_mergeInputClue:(id)arg1 ;
-(id)mePerson;
-(id)locationRegionsInPlacemarks;
-(id)uniqueOutputCluesForKey:(id)arg1 ;
-(id)uniqueInputClues;
-(void)enumeratePeopleClues:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfLocations;
-(id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(void)mergeClues:(id)arg1 ;
-(id)meaningCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(void)_mergeOutputClue:(id)arg1 ;
-(id)inputCluesForKey:(id)arg1 ;
-(id)uniqueMeaningClues;
-(void)setMePersonClue:(CLSInputPeopleClue *)arg1 ;
-(void)_mergeMeaningClue:(id)arg1 ;
-(void)enumerateTimeClues:(/*^block*/id)arg1 ;
-(id)outputClues;
-(CLSMeaningClue *)locationMobilityClue;
-(void)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(id)meaningCluesForKey:(id)arg1 ;
-(void)enumerateLocationClues:(/*^block*/id)arg1 ;
-(id)peopleDescription;
-(unsigned long long)numberOfPersons;
-(id)meaningClues;
-(id)locationRegions;
-(id)peopleDescriptionWithoutPeople:(id)arg1 ;
-(id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2 ;
-(void)enumerateTimeOfDayClues:(/*^block*/id)arg1 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2 ;
@end


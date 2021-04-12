/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject {

	RPPeopleDiscovery* _peopleDiscovery;

}

@property (nonatomic,retain) RPPeopleDiscovery * peopleDiscovery;              //@synthesize peopleDiscovery=_peopleDiscovery - In the implementation block
-(id)init;
-(RPPeopleDiscovery *)peopleDiscovery;
-(void)startMonitoringProximity;
-(void)stopMonitoringProximity;
-(id)suggestionsByBoostingNearbySuggestions:(id)arg1 ;
-(void)setPeopleDiscovery:(RPPeopleDiscovery *)arg1 ;
@end


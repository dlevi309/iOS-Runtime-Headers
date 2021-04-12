/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


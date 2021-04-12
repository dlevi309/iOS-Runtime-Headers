/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSDate, MNCommuteDestination, NSString, NSHashTable, MNCommuteDestinationSuggestion;

@interface MNCommuteDestinationScore : NSObject {

	BOOL _destinationInvalid;
	int _score;
	NSDate* _lastUpdate;
	MNCommuteDestination* _destination;
	NSString* _descriptionExtras;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic,__weak) MNCommuteDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL destinationInvalid;                                   //@synthesize destinationInvalid=_destinationInvalid - In the implementation block
@property (nonatomic,readonly) int score;                                                 //@synthesize score=_score - In the implementation block
@property (readonly) double weightedScore; 
@property (readonly) MNCommuteDestinationSuggestion * destinationSuggestion; 
@property (nonatomic,readonly) NSString * descriptionExtras;                              //@synthesize descriptionExtras=_descriptionExtras - In the implementation block
+(double)weight;
+(id)sessionStartDate;
+(void)setSessionStartDate:(id)arg1 ;
+(id)sessionStartDateOrNow;
-(NSDate *)lastUpdate;
-(void)addObserver:(id)arg1 ;
-(void)setDestination:(MNCommuteDestination *)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(id)initWithDestination:(id)arg1 ;
-(int)score;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(id)description;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)notifyObservers;
-(double)weightedScore;
-(MNCommuteDestination *)destination;
-(void)lastUpdateIsNow;
-(MNCommuteDestinationSuggestion *)destinationSuggestion;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(NSString *)descriptionExtras;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(int)score;
-(MNCommuteDestination *)destination;
-(void)setDestination:(MNCommuteDestination *)arg1 ;
-(NSDate *)lastUpdate;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)initWithDestination:(id)arg1 ;
-(void)notifyObservers;
-(void)lastUpdateIsNow;
-(MNCommuteDestinationSuggestion *)destinationSuggestion;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(NSString *)descriptionExtras;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(double)weightedScore;
@end


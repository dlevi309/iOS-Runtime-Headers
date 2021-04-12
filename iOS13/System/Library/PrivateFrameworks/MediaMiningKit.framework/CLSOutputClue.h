/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>

@class NSMutableArray, CLSEvent, CLSPerson, CLSPlace;

@interface CLSOutputClue : CLSClue {

	NSMutableArray* _relatedInputTimeClues;
	NSMutableArray* _relatedInputLocationClues;
	NSMutableArray* _relatedInputPeopleClues;
	CLSEvent* _relatedEvent;
	CLSPerson* _relatedPerson;
	CLSPlace* _relatedPlace;

}

@property (retain) CLSPlace * relatedPlace;                //@synthesize relatedPlace=_relatedPlace - In the implementation block
@property (retain) CLSPerson * relatedPerson;              //@synthesize relatedPerson=_relatedPerson - In the implementation block
@property (retain) CLSEvent * relatedEvent;                //@synthesize relatedEvent=_relatedEvent - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(id)init;
-(id)description;
-(CLSPlace *)relatedPlace;
-(void)setRelatedPlace:(CLSPlace *)arg1 ;
-(CLSEvent *)relatedEvent;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)addRelatedInputClues:(id)arg1 ;
-(id)relatedInputClues;
-(id)relatedInputLocationClues;
-(id)relatedInputPeopleClues;
-(id)relatedInputTimeClues;
-(void)setRelatedEvent:(CLSEvent *)arg1 ;
-(CLSPerson *)relatedPerson;
-(void)setRelatedPerson:(CLSPerson *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>

@class NSMutableArray, CLSEvent, CLSPersonIdentity, CLSPlace;

@interface CLSOutputClue : CLSClue {

	NSMutableArray* _relatedInputTimeClues;
	NSMutableArray* _relatedInputLocationClues;
	NSMutableArray* _relatedInputPeopleClues;
	CLSEvent* _relatedEvent;
	CLSPersonIdentity* _relatedPerson;
	CLSPlace* _relatedPlace;

}

@property (retain) CLSPlace * relatedPlace;                        //@synthesize relatedPlace=_relatedPlace - In the implementation block
@property (retain) CLSPersonIdentity * relatedPerson;              //@synthesize relatedPerson=_relatedPerson - In the implementation block
@property (retain) CLSEvent * relatedEvent;                        //@synthesize relatedEvent=_relatedEvent - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)relatedInputTimeClues;
-(id)init;
-(CLSEvent *)relatedEvent;
-(id)description;
-(CLSPlace *)relatedPlace;
-(void)addRelatedInputClues:(id)arg1 ;
-(id)relatedInputLocationClues;
-(void)setRelatedPerson:(CLSPersonIdentity *)arg1 ;
-(void)setRelatedPlace:(CLSPlace *)arg1 ;
-(id)relatedInputClues;
-(void)setRelatedEvent:(CLSEvent *)arg1 ;
-(id)relatedInputPeopleClues;
-(CLSPersonIdentity *)relatedPerson;
@end


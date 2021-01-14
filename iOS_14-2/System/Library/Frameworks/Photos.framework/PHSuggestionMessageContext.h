/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSArray, NSDateInterval, NSMutableDictionary, PHPhotoLibrary;

@interface PHSuggestionMessageContext : NSObject {

	NSArray* _messages;
	NSDateInterval* _dateInterval;
	unsigned long long _numberOfParticipants;
	NSArray* _cnParticipants;
	NSArray* _phParticipants;
	NSMutableDictionary* _suggestionMatchingResultsBySuggestionIdentifier;
	PHPhotoLibrary* _photoLibrary;
	NSArray* _resolvedParticipants;
	NSArray* _messageTokens;

}

@property (nonatomic,readonly) NSArray * cnParticipants;                                                           //@synthesize cnParticipants=_cnParticipants - In the implementation block
@property (nonatomic,readonly) NSArray * phParticipants;                                                           //@synthesize phParticipants=_phParticipants - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * suggestionMatchingResultsBySuggestionIdentifier;              //@synthesize suggestionMatchingResultsBySuggestionIdentifier=_suggestionMatchingResultsBySuggestionIdentifier - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                                        //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSArray * resolvedParticipants;                                                       //@synthesize resolvedParticipants=_resolvedParticipants - In the implementation block
@property (nonatomic,retain) NSArray * messageTokens;                                                              //@synthesize messageTokens=_messageTokens - In the implementation block
@property (nonatomic,readonly) NSArray * messages;                                                                 //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                                                      //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfParticipants;                                            //@synthesize numberOfParticipants=_numberOfParticipants - In the implementation block
-(NSDateInterval *)dateInterval;
-(id)detailedDescription;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)description;
-(NSArray *)messages;
-(id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2 photoLibrary:(id)arg3 ;
-(id)initWithMessages:(id)arg1 ;
-(void)setCnParticipants:(NSArray *)arg1 ;
-(void)setPhParticipants:(NSArray *)arg1 ;
-(NSArray *)messageTokens;
-(id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2 photoLibrary:(id)arg3 ;
-(NSArray *)resolvedParticipants;
-(id)_suggestionsMatchingType:(long long)arg1 ;
-(void)matchWithSuggestions:(id)arg1 ;
-(id)matchingResultWithSuggestion:(id)arg1 ;
-(unsigned long long)numberOfParticipants;
-(NSArray *)cnParticipants;
-(id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1 ;
-(id)_mostRecentSuggestionFromSuggestions:(id)arg1 ;
-(NSArray *)phParticipants;
-(NSMutableDictionary *)suggestionMatchingResultsBySuggestionIdentifier;
-(void)setResolvedParticipants:(NSArray *)arg1 ;
-(void)setMessageTokens:(NSArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, TIKeyboardState;

@interface TIMessageEvent : NSObject {

	int _wordsEnteredCount;
	int _finalWordsEnteredCount;
	int _staticCount;
	int _dynamicCount;
	int _textReplacementsCount;
	int _addressBookCount;
	int _namedEntitiesCount;
	int _oovCount;
	int _emojiPlaneCount;
	int _emojiPredictionCount;
	int _emojiSearchCount;
	int _emojiPopoverCount;
	int _responseKitCount;
	int _pqtCount;
	int _multilingualCount;
	NSString* _messageText;
	double _startTime;
	double _endTime;
	TIKeyboardState* _lastKeyboardState;

}

@property (nonatomic,retain) NSString * messageText;                           //@synthesize messageText=_messageText - In the implementation block
@property (assign) double startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                                             //@synthesize endTime=_endTime - In the implementation block
@property (assign) int wordsEnteredCount;                                      //@synthesize wordsEnteredCount=_wordsEnteredCount - In the implementation block
@property (assign) int finalWordsEnteredCount;                                 //@synthesize finalWordsEnteredCount=_finalWordsEnteredCount - In the implementation block
@property (assign) int staticCount;                                            //@synthesize staticCount=_staticCount - In the implementation block
@property (assign) int dynamicCount;                                           //@synthesize dynamicCount=_dynamicCount - In the implementation block
@property (assign) int textReplacementsCount;                                  //@synthesize textReplacementsCount=_textReplacementsCount - In the implementation block
@property (assign) int addressBookCount;                                       //@synthesize addressBookCount=_addressBookCount - In the implementation block
@property (assign) int namedEntitiesCount;                                     //@synthesize namedEntitiesCount=_namedEntitiesCount - In the implementation block
@property (assign) int oovCount;                                               //@synthesize oovCount=_oovCount - In the implementation block
@property (assign) int emojiPlaneCount;                                        //@synthesize emojiPlaneCount=_emojiPlaneCount - In the implementation block
@property (assign) int emojiPredictionCount;                                   //@synthesize emojiPredictionCount=_emojiPredictionCount - In the implementation block
@property (assign) int emojiSearchCount;                                       //@synthesize emojiSearchCount=_emojiSearchCount - In the implementation block
@property (assign) int emojiPopoverCount;                                      //@synthesize emojiPopoverCount=_emojiPopoverCount - In the implementation block
@property (assign) int responseKitCount;                                       //@synthesize responseKitCount=_responseKitCount - In the implementation block
@property (assign) int pqtCount;                                               //@synthesize pqtCount=_pqtCount - In the implementation block
@property (assign) int multilingualCount;                                      //@synthesize multilingualCount=_multilingualCount - In the implementation block
@property (nonatomic,retain) TIKeyboardState * lastKeyboardState;              //@synthesize lastKeyboardState=_lastKeyboardState - In the implementation block
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(TIKeyboardState *)lastKeyboardState;
-(void)setLastKeyboardState:(TIKeyboardState *)arg1 ;
-(int)namedEntitiesCount;
-(void)setEndTime:(double)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(double)endTime;
-(NSString *)messageText;
-(double)startTime;
-(BOOL)hasText:(id)arg1 ;
-(int)oovCount;
-(int)pqtCount;
-(void)analyzeWordEntryAligned:(id)arg1 ;
-(void)analyzeWordEntry:(id)arg1 ;
-(BOOL)hasTextInWordEntry:(id)arg1 ;
-(void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)arg1 ;
-(void)dispatchWithTestingParameters:(id)arg1 ;
-(int)durationInSecondsFromStartTime:(double)arg1 endTime:(double)arg2 ;
-(int)wordsEnteredCount;
-(void)setWordsEnteredCount:(int)arg1 ;
-(int)finalWordsEnteredCount;
-(void)setFinalWordsEnteredCount:(int)arg1 ;
-(int)staticCount;
-(void)setStaticCount:(int)arg1 ;
-(int)dynamicCount;
-(void)setDynamicCount:(int)arg1 ;
-(int)textReplacementsCount;
-(void)setTextReplacementsCount:(int)arg1 ;
-(int)addressBookCount;
-(void)setAddressBookCount:(int)arg1 ;
-(void)setNamedEntitiesCount:(int)arg1 ;
-(void)setOovCount:(int)arg1 ;
-(int)emojiPlaneCount;
-(void)setEmojiPlaneCount:(int)arg1 ;
-(int)emojiPredictionCount;
-(void)setEmojiPredictionCount:(int)arg1 ;
-(int)emojiSearchCount;
-(void)setEmojiSearchCount:(int)arg1 ;
-(int)emojiPopoverCount;
-(void)setEmojiPopoverCount:(int)arg1 ;
-(int)responseKitCount;
-(void)setResponseKitCount:(int)arg1 ;
-(void)setPqtCount:(int)arg1 ;
-(int)multilingualCount;
-(void)setMultilingualCount:(int)arg1 ;
@end


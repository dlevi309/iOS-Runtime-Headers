/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocol.h>

@class NSString, NSMutableArray, NSLocale, NSDate, TIWordEntry, TIKeyboardInput, TIKeyboardState, TIKeyboardTouchEvent, NSMutableDictionary;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol> {

	BOOL _didReceiveSecureFieldEvent;
	BOOL _includeInputToLastWord;
	NSString* _layoutName;
	NSString* _startContext;
	NSMutableArray* _layouts;
	NSLocale* _locale;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _applicationID;
	NSMutableArray* _userActionHistory;
	TIWordEntry* _currentWord;
	TIKeyboardInput* _lastInput;
	TIKeyboardState* _savedDeleteInputKeyboardState;
	unsigned long long _currentLayoutID;
	TIWordEntry* _lastWord;
	TIKeyboardTouchEvent* _timeCalibrationTouch;
	double _calibratedTimeBase;
	NSMutableDictionary* _touchesHistory;
	long long _lastActivePathIndex;

}

@property (nonatomic,retain) NSMutableArray * userActionHistory;                           //@synthesize userActionHistory=_userActionHistory - In the implementation block
@property (nonatomic,retain) TIWordEntry * currentWord;                                    //@synthesize currentWord=_currentWord - In the implementation block
@property (nonatomic,retain) TIKeyboardInput * lastInput;                                  //@synthesize lastInput=_lastInput - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                                     //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,retain) TIKeyboardState * savedDeleteInputKeyboardState;              //@synthesize savedDeleteInputKeyboardState=_savedDeleteInputKeyboardState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLayoutID;                           //@synthesize currentLayoutID=_currentLayoutID - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) TIWordEntry * lastWord;                                       //@synthesize lastWord=_lastWord - In the implementation block
@property (assign,nonatomic) BOOL includeInputToLastWord;                                  //@synthesize includeInputToLastWord=_includeInputToLastWord - In the implementation block
@property (retain) TIKeyboardTouchEvent * timeCalibrationTouch;                            //@synthesize timeCalibrationTouch=_timeCalibrationTouch - In the implementation block
@property (assign) double calibratedTimeBase;                                              //@synthesize calibratedTimeBase=_calibratedTimeBase - In the implementation block
@property (assign,nonatomic) BOOL didReceiveSecureFieldEvent;                              //@synthesize didReceiveSecureFieldEvent=_didReceiveSecureFieldEvent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * touchesHistory;                         //@synthesize touchesHistory=_touchesHistory - In the implementation block
@property (assign,nonatomic) long long lastActivePathIndex;                                //@synthesize lastActivePathIndex=_lastActivePathIndex - In the implementation block
@property (nonatomic,copy) NSString * layoutName;                                          //@synthesize layoutName=_layoutName - In the implementation block
@property (nonatomic,copy) NSString * startContext;                                        //@synthesize startContext=_startContext - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)layoutName;
-(void)setStartContext:(NSString *)arg1 ;
-(NSMutableArray *)layouts;
-(TIWordEntry *)lastWord;
-(NSString *)startContext;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2 ;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
-(void)addTouchEvent:(id)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9 ;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8 ;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2 ;
-(TIWordEntry *)currentWord;
-(id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2 ;
-(double)calibratedCurrentTimestamp;
-(BOOL)isCurrentWordEmpty;
-(BOOL)testForRapidDeleteContextChange:(id)arg1 ;
-(void)setLayoutName:(NSString *)arg1 ;
-(BOOL)didReceiveSecureFieldEvent;
-(void)setDidReceiveSecureFieldEvent:(BOOL)arg1 ;
-(NSMutableArray *)userActionHistory;
-(void)setUserActionHistory:(NSMutableArray *)arg1 ;
-(void)setCurrentWord:(TIWordEntry *)arg1 ;
-(TIKeyboardInput *)lastInput;
-(void)setLastInput:(TIKeyboardInput *)arg1 ;
-(TIKeyboardState *)savedDeleteInputKeyboardState;
-(void)setSavedDeleteInputKeyboardState:(TIKeyboardState *)arg1 ;
-(unsigned long long)currentLayoutID;
-(void)setCurrentLayoutID:(unsigned long long)arg1 ;
-(void)setLastWord:(TIWordEntry *)arg1 ;
-(BOOL)includeInputToLastWord;
-(void)setIncludeInputToLastWord:(BOOL)arg1 ;
-(TIKeyboardTouchEvent *)timeCalibrationTouch;
-(void)setTimeCalibrationTouch:(TIKeyboardTouchEvent *)arg1 ;
-(double)calibratedTimeBase;
-(void)setCalibratedTimeBase:(double)arg1 ;
-(NSMutableDictionary *)touchesHistory;
-(void)setTouchesHistory:(NSMutableDictionary *)arg1 ;
-(long long)lastActivePathIndex;
-(void)setLastActivePathIndex:(long long)arg1 ;
@end


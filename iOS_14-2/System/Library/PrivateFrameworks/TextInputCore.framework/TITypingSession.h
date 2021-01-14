/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocol.h>

@protocol TITypingSessionDelegate;
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
	id<TITypingSessionDelegate> _delegate;
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
@property (assign,nonatomic,__weak) id<TITypingSessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)applicationID;
-(NSString *)layoutName;
-(TIKeyboardTouchEvent *)timeCalibrationTouch;
-(long long)lastActivePathIndex;
-(NSLocale *)locale;
-(void)setApplicationID:(NSString *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)setUserActionHistory:(NSMutableArray *)arg1 ;
-(TIKeyboardInput *)lastInput;
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9 ;
-(id<TITypingSessionDelegate>)delegate;
-(void)setTimeCalibrationTouch:(TIKeyboardTouchEvent *)arg1 ;
-(TIWordEntry *)currentWord;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setSavedDeleteInputKeyboardState:(TIKeyboardState *)arg1 ;
-(double)calibratedTimeBase;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)touchesHistory;
-(void)setDidReceiveSecureFieldEvent:(BOOL)arg1 ;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
-(void)setLastActivePathIndex:(long long)arg1 ;
-(NSString *)startContext;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<TITypingSessionDelegate>)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(NSString *)description;
-(void)setStartContext:(NSString *)arg1 ;
-(TIWordEntry *)lastWord;
-(void)setCalibratedTimeBase:(double)arg1 ;
-(void)setCurrentWord:(TIWordEntry *)arg1 ;
-(BOOL)didReceiveSecureFieldEvent;
-(TIKeyboardState *)savedDeleteInputKeyboardState;
-(void)setTouchesHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)layouts;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2 ;
-(void)setIncludeInputToLastWord:(BOOL)arg1 ;
-(unsigned long long)currentLayoutID;
-(BOOL)isCurrentWordEmpty;
-(id)initWithCoder:(id)arg1 ;
-(double)calibratedCurrentTimestamp;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8 ;
-(void)addTouchEvent:(id)arg1 ;
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2 ;
-(void)setLayoutName:(NSString *)arg1 ;
-(NSDate *)endTime;
-(void)setLastWord:(TIWordEntry *)arg1 ;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2 ;
-(id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2 ;
-(NSMutableArray *)userActionHistory;
-(void)setCurrentLayoutID:(unsigned long long)arg1 ;
-(void)setLastInput:(TIKeyboardInput *)arg1 ;
-(NSDate *)startTime;
-(BOOL)includeInputToLastWord;
-(BOOL)testForRapidDeleteContextChange:(id)arg1 ;
@end


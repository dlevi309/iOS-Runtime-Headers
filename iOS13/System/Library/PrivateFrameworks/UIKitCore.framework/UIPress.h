/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIResponderForwardable.h>

@class UIResponder, UIWindow, NSMutableArray, UIKey, NSArray, NSString;

@interface UIPress : NSObject <_UIResponderForwardable> {

	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	BOOL _abandonForwardingRecord;
	BOOL _isDelayed;
	BOOL _sentPressesEnded;
	BOOL _longClick;
	unsigned _contextID;
	double _timestamp;
	long long _phase;
	long long _type;
	UIWindow* _window;
	UIResponder* _responder;
	double _force;
	UIKey* _key;
	unsigned long long _source;
	unsigned long long _gameControllerComponent;
	unsigned long long _clickCount;

}

@property (assign,nonatomic) double timestamp;                                                                                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase;                                                                                                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long type;                                                                                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                                                                           //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIResponder * responder;                                                                                                     //@synthesize responder=_responder - In the implementation block
@property (nonatomic,copy) NSArray * gestureRecognizers; 
@property (nonatomic,retain) UIKey * key;                                                                                                                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double force;                                                                                                                //@synthesize force=_force - In the implementation block
@property (assign,setter=_setSource:,getter=_source,nonatomic) unsigned long long source;                                                                 //@synthesize source=_source - In the implementation block
@property (assign,setter=_setGameControllerComponent:,getter=_gameControllerComponent,nonatomic) unsigned long long gameControllerComponent;              //@synthesize gameControllerComponent=_gameControllerComponent - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                                                                                                        //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL isDelayed;                                                                                                              //@synthesize isDelayed=_isDelayed - In the implementation block
@property (assign,nonatomic) BOOL sentPressesEnded;                                                                                                       //@synthesize sentPressesEnded=_sentPressesEnded - In the implementation block
@property (assign,nonatomic) unsigned long long clickCount;                                                                                               //@synthesize clickCount=_clickCount - In the implementation block
@property (assign,getter=isLongClick,nonatomic) BOOL longClick;                                                                                           //@synthesize longClick=_longClick - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
-(NSString *)description;
-(UIKey *)key;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setKey:(UIKey *)arg1 ;
-(double)timestamp;
-(unsigned)contextID;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)_source;
-(UIWindow *)window;
-(long long)phase;
-(NSArray *)gestureRecognizers;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(UIResponder *)responder;
-(void)setWindow:(UIWindow *)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(UIResponder *)_responder;
-(unsigned long long)_gameControllerComponent;
-(void)setPhase:(long long)arg1 ;
-(unsigned long long)clickCount;
-(void)setClickCount:(unsigned long long)arg1 ;
-(BOOL)isLongClick;
-(BOOL)_isSynthetic;
-(id)_phaseDescription;
-(void)setIsDelayed:(BOOL)arg1 ;
-(void)_loadStateFromPress:(id)arg1 ;
-(BOOL)isDelayed;
-(void)setSentPressesEnded:(BOOL)arg1 ;
-(void)setResponder:(UIResponder *)arg1 ;
-(void)setLongClick:(BOOL)arg1 ;
-(void)_loadStateFromPressInfo:(id)arg1 ;
-(void)_setForwardablePhase:(long long)arg1 ;
-(void)_setResponder:(id)arg1 ;
-(BOOL)sentPressesEnded;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(BOOL)_isDirectionalPress;
-(BOOL)_isAbandoningForwardingRecord;
-(void)_abandonForwardingRecord;
-(id)_mutableForwardingRecord;
-(long long)_forwardablePhase;
-(void)_setSource:(unsigned long long)arg1 ;
-(void)_setGameControllerComponent:(unsigned long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIResponderForwardable.h>
#import <UIKitCore/_UIEventComponent.h>

@class UIResponder, UIWindow, NSMutableArray, UIKey, NSArray, NSString;

@interface UIPress : NSObject <_UIResponderForwardable, _UIEventComponent> {

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
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)force;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)_abandonForwardingRecord;
-(unsigned long long)_gameControllerComponent;
-(BOOL)_isAbandoningForwardingRecord;
-(double)timestamp;
-(id)_forwardingRecord;
-(BOOL)_isSynthetic;
-(void)setType:(long long)arg1 ;
-(UIResponder *)_responder;
-(void)setResponder:(UIResponder *)arg1 ;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(id)_mutableForwardingRecord;
-(UIResponder *)responder;
-(void)setForce:(double)arg1 ;
-(NSString *)description;
-(void)_setGameControllerComponent:(unsigned long long)arg1 ;
-(void)_loadStateFromPressInfo:(id)arg1 ;
-(unsigned)contextID;
-(BOOL)sentPressesEnded;
-(long long)_forwardablePhase;
-(UIWindow *)window;
-(BOOL)isDelayed;
-(UIKey *)key;
-(long long)type;
-(void)setIsDelayed:(BOOL)arg1 ;
-(id)_phaseDescription;
-(void)setClickCount:(unsigned long long)arg1 ;
-(long long)_responderForwardableType;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(void)setSentPressesEnded:(BOOL)arg1 ;
-(void)setLongClick:(BOOL)arg1 ;
-(BOOL)isLongClick;
-(void)_setSource:(unsigned long long)arg1 ;
-(unsigned long long)_source;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(NSArray *)gestureRecognizers;
-(long long)phase;
-(unsigned long long)clickCount;
-(void)_setResponder:(id)arg1 ;
-(BOOL)_isDirectionalPress;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setKey:(UIKey *)arg1 ;
-(void)_loadStateFromPress:(id)arg1 ;
-(void)_setForwardablePhase:(long long)arg1 ;
@end


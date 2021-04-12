/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSString, TIKeyboardTouchEvent, TIKeyboardCandidate;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {

	SCD_Union_TI5 _flags;
	BOOL _backspace;
	NSString* _string;
	id<NSCopying><NSObject><NSSecureCoding> _object;
	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardCandidate* _acceptedCandidate;
	NSString* _inputManagerHint;
	long long _transliterationType;
	double _timestamp;

}

@property (nonatomic,copy) NSString * string;                                                                            //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject><NSSecureCoding> object;                                               //@synthesize object=_object - In the implementation block
@property (assign,getter=isBackspace,nonatomic) BOOL backspace;                                                          //@synthesize backspace=_backspace - In the implementation block
@property (assign,getter=isUppercase,nonatomic) BOOL uppercase; 
@property (assign,getter=isAutoshifted,nonatomic) BOOL autoshifted; 
@property (assign,getter=isPopupVariant,nonatomic) BOOL popupVariant; 
@property (assign,getter=isMultitap,nonatomic) BOOL multitap; 
@property (assign,getter=isFlick,nonatomic) BOOL flick; 
@property (assign,getter=isGesture,nonatomic) BOOL gesture; 
@property (assign,getter=isSynthesizedByAcceptingCandidate,nonatomic) BOOL synthesizedByAcceptingCandidate; 
@property (assign,getter=isDoubleSpace,nonatomic) BOOL doubleSpace; 
@property (assign,getter=isRapidDelete,nonatomic) BOOL rapidDelete; 
@property (assign,getter=isShiftDown,nonatomic) BOOL shiftDown; 
@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;                                                          //@synthesize touchEvent=_touchEvent - In the implementation block
@property (assign,nonatomic) long long transliterationType;                                                              //@synthesize transliterationType=_transliterationType - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                                                    //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * inputManagerHint;                                                                  //@synthesize inputManagerHint=_inputManagerHint - In the implementation block
@property (assign,nonatomic) double timestamp;                                                                           //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isFlick;
-(BOOL)isGesture;
-(double)timestamp;
-(BOOL)isUppercase;
-(BOOL)isShiftDown;
-(BOOL)isBackspace;
-(void)setGesture:(BOOL)arg1 ;
-(BOOL)isDoubleSpace;
-(void)setDoubleSpace:(BOOL)arg1 ;
-(BOOL)isRapidDelete;
-(void)setRapidDelete:(BOOL)arg1 ;
-(NSString *)inputManagerHint;
-(long long)transliterationType;
-(void)setTransliterationType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFlick:(BOOL)arg1 ;
-(id<NSCopying><NSObject><NSSecureCoding>)object;
-(TIKeyboardTouchEvent *)touchEvent;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(BOOL)isPopupVariant;
-(void)setShiftDown:(BOOL)arg1 ;
-(void)setBackspace:(BOOL)arg1 ;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)isAutoshifted;
-(void)setPopupVariant:(BOOL)arg1 ;
-(void)setAutoshifted:(BOOL)arg1 ;
-(void)setInputManagerHint:(NSString *)arg1 ;
-(BOOL)isSynthesizedByAcceptingCandidate;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setSynthesizedByAcceptingCandidate:(BOOL)arg1 ;
-(void)setObject:(id<NSCopying><NSObject><NSSecureCoding>)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(BOOL)isMultitap;
-(void)setMultitap:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end


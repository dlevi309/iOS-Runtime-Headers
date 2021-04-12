/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@interface BKEvent : NSObject {

	unsigned char _cls;
	BOOL _isStart;
	BOOL _isTerminal;
	BOOL _isMetadata;
	BOOL _isSmartKeyboard;
	BOOL _isHigh;
	BOOL _isLow;
	unsigned _event;

}

@property (readonly) unsigned char cls;                 //@synthesize cls=_cls - In the implementation block
@property (readonly) unsigned event;                    //@synthesize event=_event - In the implementation block
@property (readonly) BOOL isStart;                      //@synthesize isStart=_isStart - In the implementation block
@property (readonly) BOOL isTerminal;                   //@synthesize isTerminal=_isTerminal - In the implementation block
@property (readonly) BOOL isMetadata;                   //@synthesize isMetadata=_isMetadata - In the implementation block
@property (readonly) BOOL isSmartKeyboard;              //@synthesize isSmartKeyboard=_isSmartKeyboard - In the implementation block
@property (readonly) BOOL isHigh;                       //@synthesize isHigh=_isHigh - In the implementation block
@property (readonly) BOOL isLow;                        //@synthesize isLow=_isLow - In the implementation block
-(id)description;
-(unsigned)event;
-(BOOL)isTerminal;
-(BOOL)isStart;
-(unsigned char)cls;
-(void)setProperties;
-(id)initWithEventOrCode:(unsigned long long)arg1 ;
-(id)initWithEncodedEventOrCode:(unsigned)arg1 ;
-(void)encodeEventValue:(unsigned*)arg1 secondValue:(unsigned*)arg2 ;
-(BOOL)isMetadata;
-(BOOL)isSmartKeyboard;
-(BOOL)isHigh;
-(BOOL)isLow;
@end


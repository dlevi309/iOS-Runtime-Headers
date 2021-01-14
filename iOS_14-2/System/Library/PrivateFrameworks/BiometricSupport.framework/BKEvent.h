/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithEventOrCode:(unsigned long long)arg1 ;
-(void)encodeEventValue:(unsigned*)arg1 secondValue:(unsigned*)arg2 ;
-(BOOL)isSmartKeyboard;
-(BOOL)isTerminal;
-(id)description;
-(unsigned)event;
-(BOOL)isLow;
-(id)initWithEncodedEventOrCode:(unsigned)arg1 ;
-(BOOL)isHigh;
-(void)setProperties;
-(BOOL)isStart;
-(unsigned char)cls;
-(BOOL)isMetadata;
@end


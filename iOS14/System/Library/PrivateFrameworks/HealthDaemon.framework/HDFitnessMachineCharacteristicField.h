/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDFitnessMachineCharacteristicField : NSObject {

	BOOL _flagFieldFlipped;
	unsigned char _correspondingFlagBit;
	unsigned char _fieldLength;
	unsigned char _factor;
	BOOL _isSet;

}

@property (assign,nonatomic) BOOL flagFieldFlipped;                             //@synthesize flagFieldFlipped=_flagFieldFlipped - In the implementation block
@property (nonatomic,readonly) unsigned char correspondingFlagBit;              //@synthesize correspondingFlagBit=_correspondingFlagBit - In the implementation block
@property (nonatomic,readonly) unsigned char fieldLength;                       //@synthesize fieldLength=_fieldLength - In the implementation block
@property (nonatomic,readonly) unsigned char factor;                            //@synthesize factor=_factor - In the implementation block
@property (assign,nonatomic) BOOL isSet;                                        //@synthesize isSet=_isSet - In the implementation block
-(BOOL)isSet;
-(unsigned char)factor;
-(void)setIsSet:(BOOL)arg1 ;
-(id)initWithCorrespondingFlagBit:(unsigned char)arg1 fieldLength:(unsigned char)arg2 factor:(unsigned char)arg3 ;
-(void)setFlagFieldFlipped:(BOOL)arg1 ;
-(unsigned char)correspondingFlagBit;
-(unsigned char)fieldLength;
-(BOOL)isIncludedInFlags:(unsigned)arg1 ;
-(void)setValueWithBytes:(const char**)arg1 before:(const char*)arg2 ;
-(id)valueFromDouble:(double)arg1 ;
-(id)valueAsData;
-(void)markFieldSet;
-(BOOL)flagFieldFlipped;
@end


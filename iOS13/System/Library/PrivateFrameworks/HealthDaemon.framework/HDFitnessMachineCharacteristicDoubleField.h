/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField {

	BOOL _isSigned;
	double _value;

}

@property (assign,nonatomic) double value;               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL isSigned;              //@synthesize isSigned=_isSigned - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isSigned;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setValueWithBytes:(const char**)arg1 before:(const char*)arg2 ;
-(id)valueAsData;
@end


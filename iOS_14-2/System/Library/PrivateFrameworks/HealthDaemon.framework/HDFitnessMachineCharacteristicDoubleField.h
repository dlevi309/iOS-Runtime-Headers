/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField {

	BOOL _isSigned;
	double _value;

}

@property (assign,nonatomic) double value;               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL isSigned;              //@synthesize isSigned=_isSigned - In the implementation block
-(BOOL)isSigned;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setValueWithBytes:(const char**)arg1 before:(const char*)arg2 ;
-(id)valueAsData;
@end


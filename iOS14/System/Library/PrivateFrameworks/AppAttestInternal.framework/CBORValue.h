/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAttestInternal.framework/AppAttestInternal
*/


@interface CBORValue : NSObject

@property (nonatomic,readonly) int fieldType; 
@property (nonatomic,readonly) unsigned char fieldValue; 
-(void)write:(id)arg1 ;
-(int)fieldType;
-(unsigned char)fieldValue;
-(void)encodeStartItems:(unsigned long long)arg1 output:(id)arg2 ;
-(void)setUint:(unsigned char)arg1 item2:(unsigned long long)arg2 output:(id)arg3 ;
-(unsigned long long)getNumUintBytes:(unsigned long long)arg1 ;
-(void)setAdditionalInformation:(unsigned char)arg1 item2:(unsigned char)arg2 output:(id)arg3 ;
@end


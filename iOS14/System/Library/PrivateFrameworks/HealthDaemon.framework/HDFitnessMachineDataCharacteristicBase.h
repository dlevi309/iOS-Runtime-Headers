/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>
#import <libobjc.A.dylib/HDHealthServiceCharacteristic.h>

@class NSDate, NSArray, NSString;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (nonatomic,copy,readonly) NSArray * allFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uuid;
+(unsigned char)flagFieldLength;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(unsigned short)elapsedTime;
-(NSArray *)allFields;
-(BOOL)elapsedTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end


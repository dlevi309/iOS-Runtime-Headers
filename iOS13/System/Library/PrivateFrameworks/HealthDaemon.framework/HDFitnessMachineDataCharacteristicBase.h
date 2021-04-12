/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>
#import <libobjc.A.dylib/HDHealthServiceCharacteristic.h>

@class NSDate, NSString;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uuid;
+(unsigned char)flagFieldLength;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(unsigned short)elapsedTime;
-(id)allFields;
-(BOOL)elapsedTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end


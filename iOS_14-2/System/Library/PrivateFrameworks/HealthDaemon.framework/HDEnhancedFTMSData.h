/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class NSNumber, NSDate;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering> {

	NSNumber* _instantaneousSpeed;
	NSNumber* _averageSpeed;

}

@property (nonatomic,readonly) NSDate * updateTime; 
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)generateDatums:(id)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end


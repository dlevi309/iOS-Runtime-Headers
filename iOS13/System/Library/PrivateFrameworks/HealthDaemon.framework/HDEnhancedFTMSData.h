/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class NSNumber, NSDate;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering> {

	NSNumber* _instantaneousSpeed;
	NSNumber* _averageSpeed;

}

@property (nonatomic,retain) NSNumber * instantaneousSpeed;              //@synthesize instantaneousSpeed=_instantaneousSpeed - In the implementation block
@property (nonatomic,retain) NSNumber * averageSpeed;                    //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime; 
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)setAverageSpeed:(NSNumber *)arg1 ;
-(NSNumber *)averageSpeed;
-(void)setInstantaneousSpeed:(NSNumber *)arg1 ;
-(NSNumber *)instantaneousSpeed;
-(id)generateDatums:(id)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end


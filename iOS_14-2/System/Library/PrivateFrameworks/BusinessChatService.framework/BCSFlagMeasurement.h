/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSMeasurement.h>

@class NSArray;

@interface BCSFlagMeasurement : BCSMeasurement {

	BOOL _flag;
	BOOL _flagWasSet;
	NSArray* _realTimeMeasurementHandlers;
	long long _flagMeasurementType;

}

@property (assign,nonatomic) BOOL flagWasSet;                                      //@synthesize flagWasSet=_flagWasSet - In the implementation block
@property (nonatomic,readonly) NSArray * realTimeMeasurementHandlers;              //@synthesize realTimeMeasurementHandlers=_realTimeMeasurementHandlers - In the implementation block
@property (nonatomic,readonly) long long flagMeasurementType;                      //@synthesize flagMeasurementType=_flagMeasurementType - In the implementation block
@property (assign,nonatomic) BOOL flag;                                            //@synthesize flag=_flag - In the implementation block
+(id)newFlagMeasurement:(long long)arg1 withHandlers:(id)arg2 ;
-(BOOL)flag;
-(void)setFlag:(BOOL)arg1 ;
-(id)_initWithType:(long long)arg1 handlers:(id)arg2 ;
-(BOOL)flagWasSet;
-(void)setFlagWasSet:(BOOL)arg1 ;
-(NSArray *)realTimeMeasurementHandlers;
-(long long)flagMeasurementType;
@end


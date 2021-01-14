/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSArray;

@interface BitrateLimits : NSObject {

	int operatingMode;
	unsigned long long defaultValue;
	unsigned long long defaultValueCellular;
	unsigned long long defaultValue2G;
	NSArray* limits;

}

@property (nonatomic,readonly) int operatingMode; 
@property (nonatomic,readonly) NSArray * limits; 
+(unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2 ;
-(NSArray *)limits;
-(int)operatingMode;
-(void)dealloc;
-(void)capDefaultValues:(unsigned long long)arg1 ;
-(id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2 useCaseWatchContinuity:(BOOL)arg3 ;
-(unsigned long long)defaultValueForNetwork:(BOOL)arg1 ;
@end


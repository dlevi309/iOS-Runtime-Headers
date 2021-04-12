/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSArray *)limits;
-(int)operatingMode;
-(void)capDefaultValues:(unsigned long long)arg1 ;
-(id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2 ;
-(unsigned long long)defaultValueForNetwork:(BOOL)arg1 ;
@end


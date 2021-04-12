/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSNumber, HFNumberRange;

@interface HFRangeControlItemValue : NSObject {

	unsigned long long _mode;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _targetValue;

}

@property (assign,nonatomic) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                      //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                      //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * targetValue;                       //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) HFNumberRange * numberRange; 
+(id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2 ;
+(id)targetValueWithValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(NSNumber *)targetValue;
-(void)setTargetValue:(NSNumber *)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(HFNumberRange *)numberRange;
@end


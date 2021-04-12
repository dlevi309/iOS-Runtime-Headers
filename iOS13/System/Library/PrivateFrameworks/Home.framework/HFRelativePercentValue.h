/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSNumber, NSString;

@interface HFRelativePercentValue : NSObject <NSCopying, NAIdentifiable> {

	NSNumber* _value;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;

}

@property (nonatomic,copy) NSNumber * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepValue;                    //@synthesize stepValue=_stepValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(id)initWithValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(id)initWithCharacteristicReadResponse:(id)arg1 ;
@end


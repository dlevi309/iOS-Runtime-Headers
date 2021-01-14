/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSNumber;

@interface _DPValueRange : NSObject {

	NSNumber* _minPossible;
	NSNumber* _maxPossible;
	NSNumber* _range;

}

@property (nonatomic,readonly) NSNumber * minPossible;              //@synthesize minPossible=_minPossible - In the implementation block
@property (nonatomic,readonly) NSNumber * maxPossible;              //@synthesize maxPossible=_maxPossible - In the implementation block
@property (nonatomic,readonly) NSNumber * range;                    //@synthesize range=_range - In the implementation block
+(id)rangeWithMin:(id)arg1 max:(id)arg2 ;
-(id)init;
-(NSNumber *)range;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMin:(id)arg1 max:(id)arg2 ;
-(NSNumber *)maxPossible;
-(NSNumber *)minPossible;
-(BOOL)isEqualToValueRange:(id)arg1 ;
@end


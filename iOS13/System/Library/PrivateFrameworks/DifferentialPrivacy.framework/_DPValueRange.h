/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)range;
-(id)initWithMin:(id)arg1 max:(id)arg2 ;
-(NSNumber *)maxPossible;
-(NSNumber *)minPossible;
-(BOOL)isEqualToValueRange:(id)arg1 ;
@end


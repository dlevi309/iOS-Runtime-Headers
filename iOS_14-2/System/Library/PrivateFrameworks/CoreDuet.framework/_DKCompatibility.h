/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _DKCompatibility : NSObject {

	long long _min;
	long long _max;

}

@property (assign,nonatomic) long long min;              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) long long max;              //@synthesize max=_max - In the implementation block
+(id)currentCompatibility;
+(id)compatibilityWithMinVersion:(long long)arg1 maxVersion:(long long)arg2 ;
+(id)compatibilityFromSerializedCompatibility:(id)arg1 ;
-(id)serialize;
-(void)setMin:(long long)arg1 ;
-(long long)min;
-(id)description;
-(id)filterIncompatibleEvents:(id)arg1 ;
-(long long)max;
-(unsigned long long)hash;
-(void)setMax:(long long)arg1 ;
-(id)eventPredicate;
-(BOOL)isEqual:(id)arg1 ;
@end


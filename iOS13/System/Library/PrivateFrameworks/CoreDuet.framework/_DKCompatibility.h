/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMax:(long long)arg1 ;
-(long long)max;
-(void)setMin:(long long)arg1 ;
-(long long)min;
-(id)eventPredicate;
-(id)serialize;
-(id)filterIncompatibleEvents:(id)arg1 ;
@end


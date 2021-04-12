/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@interface NUPriority : NSObject {

	long long _level;
	double _order;

}

@property (nonatomic,readonly) long long level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) double order;                 //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL isHigh; 
@property (nonatomic,readonly) BOOL isLow; 
-(long long)compare:(id)arg1 ;
-(id)init;
-(id)initWithLevel:(long long)arg1 ;
-(id)description;
-(long long)level;
-(BOOL)isLow;
-(unsigned long long)hash;
-(BOOL)isHigh;
-(BOOL)isEqual:(id)arg1 ;
-(double)order;
-(id)initWithLevel:(long long)arg1 order:(double)arg2 ;
-(BOOL)isEqualToPriority:(id)arg1 ;
@end


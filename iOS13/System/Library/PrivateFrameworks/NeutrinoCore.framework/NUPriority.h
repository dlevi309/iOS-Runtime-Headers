/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(long long)level;
-(double)order;
-(id)initWithLevel:(long long)arg1 ;
-(BOOL)isHigh;
-(BOOL)isLow;
-(id)initWithLevel:(long long)arg1 order:(double)arg2 ;
-(BOOL)isEqualToPriority:(id)arg1 ;
@end


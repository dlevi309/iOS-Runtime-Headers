/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage {

	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)totalUnitCount;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)completedUnitCount;
@end


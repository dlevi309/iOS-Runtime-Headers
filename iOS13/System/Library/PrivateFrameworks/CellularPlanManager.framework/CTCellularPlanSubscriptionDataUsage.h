/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding> {

	double _dataUsed;
	double _dataCapacity;
	NSString* _dataCategory;

}

@property (nonatomic,readonly) double dataUsed;                      //@synthesize dataUsed=_dataUsed - In the implementation block
@property (nonatomic,readonly) double dataCapacity;                  //@synthesize dataCapacity=_dataCapacity - In the implementation block
@property (nonatomic,readonly) NSString * dataCategory;              //@synthesize dataCategory=_dataCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCategory:(id)arg1 andDataUsed:(double)arg2 andDataCapacity:(double)arg3 ;
-(double)dataUsed;
-(double)dataCapacity;
-(NSString *)dataCategory;
@end


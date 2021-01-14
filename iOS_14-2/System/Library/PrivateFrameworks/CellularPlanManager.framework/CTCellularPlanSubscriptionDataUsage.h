/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)dataUsed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dataCapacity;
-(NSString *)dataCategory;
-(id)initWithCategory:(id)arg1 andDataUsed:(double)arg2 andDataCapacity:(double)arg3 ;
@end


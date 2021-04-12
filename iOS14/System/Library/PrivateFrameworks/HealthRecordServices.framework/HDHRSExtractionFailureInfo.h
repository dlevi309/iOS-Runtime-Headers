/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding> {

	NSMutableArray* _failureRecords;

}

@property (nonatomic,copy,readonly) NSArray * failureRecords; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)addFailureRecord:(id)arg1 ;
-(NSArray *)failureRecords;
@end


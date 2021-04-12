/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addFailureRecord:(id)arg1 ;
-(NSArray *)failureRecords;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSError, NSArray, NSString;

@interface HKHealthRecordsIngestionOutcome : NSObject <NSCopying, NSSecureCoding> {

	BOOL _taskSuccess;
	NSNumber* _taskRuntime;
	NSError* _taskError;
	NSArray* _perAccountOutcomes;
	NSString* _analyticsString;

}

@property (nonatomic,readonly) BOOL taskSuccess;                               //@synthesize taskSuccess=_taskSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * taskRuntime;                    //@synthesize taskRuntime=_taskRuntime - In the implementation block
@property (nonatomic,copy,readonly) NSError * taskError;                       //@synthesize taskError=_taskError - In the implementation block
@property (nonatomic,copy,readonly) NSArray * perAccountOutcomes;              //@synthesize perAccountOutcomes=_perAccountOutcomes - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsString;                //@synthesize analyticsString=_analyticsString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)taskSuccess;
-(NSArray *)perAccountOutcomes;
-(id)initWithTaskSuccess:(BOOL)arg1 taskError:(id)arg2 taskRuntime:(double)arg3 perAccountOutcomes:(id)arg4 analyticsString:(id)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)analyticsString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)taskError;
-(NSNumber *)taskRuntime;
@end


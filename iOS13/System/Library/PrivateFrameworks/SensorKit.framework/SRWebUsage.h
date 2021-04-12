/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding> {

	double _totalUsageTime;

}

@property (assign) double totalUsageTime;                           //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)webUsageWithTotalUsageTime:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sr_dictionaryRepresentation;
-(double)totalUsageTime;
-(void)setTotalUsageTime:(double)arg1 ;
@end


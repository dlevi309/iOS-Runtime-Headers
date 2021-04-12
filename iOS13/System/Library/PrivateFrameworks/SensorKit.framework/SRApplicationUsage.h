/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SRApplicationUsage : NSObject <SRSampleExporting, NSSecureCoding> {

	NSString* _bundleIdentifier;
	double _usageTime;
	double _totalUsageTime;

}

@property (copy) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) double totalUsageTime;                           //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (readonly) double usageTime;                              //@synthesize usageTime=_usageTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)applicationUsageWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)sr_dictionaryRepresentation;
-(double)usageTime;
-(double)totalUsageTime;
-(void)setTotalUsageTime:(double)arg1 ;
@end


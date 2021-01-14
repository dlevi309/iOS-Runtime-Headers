/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXCoreUtilities/AXMetricContainer.h>

@class NSString, NSMutableArray, NSArray;

@interface AXMetricSession : NSObject <NSSecureCoding, AXMetricContainer> {

	BOOL _measurementsEnabled;
	NSString* _name;
	NSMutableArray* _childMetrics;
	NSArray* _enabledByEnvironmentVariables;

}

@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * childMetrics;                        //@synthesize childMetrics=_childMetrics - In the implementation block
@property (assign,nonatomic) BOOL measurementsEnabled;                             //@synthesize measurementsEnabled=_measurementsEnabled - In the implementation block
@property (nonatomic,retain) NSArray * enabledByEnvironmentVariables;              //@synthesize enabledByEnvironmentVariables=_enabledByEnvironmentVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChildMetrics:(NSMutableArray *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 measurementsEnabled:(BOOL)arg2 orEnabledByEnvironmentVariables:(id)arg3 ;
-(void)setEnabledByEnvironmentVariables:(NSArray *)arg1 ;
-(void)setMeasurementsEnabled:(BOOL)arg1 ;
-(NSMutableArray *)childMetrics;
-(BOOL)measurementsEnabled;
-(NSArray *)enabledByEnvironmentVariables;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2 ;
-(id)startMeasure:(id)arg1 ;
-(id)initWithName:(id)arg1 measurementsEnabled:(BOOL)arg2 ;
-(id)generateReport;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end


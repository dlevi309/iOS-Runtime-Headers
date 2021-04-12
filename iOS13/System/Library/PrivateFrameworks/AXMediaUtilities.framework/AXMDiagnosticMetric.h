/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface AXMDiagnosticMetric : NSObject <NSSecureCoding> {

	long long _state;
	unsigned long long _startTime;
	unsigned long long _endTime;
	mach_task_basic_info _startTaskInfo;
	task_vm_info _startVMInfo;
	mach_task_basic_info _endTaskInfo;
	task_vm_info _endVMInfo;
	NSString* _name;
	long long _representedMetrics;

}

@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long representedMetrics;                        //@synthesize representedMetrics=_representedMetrics - In the implementation block
@property (nonatomic,readonly) BOOL isElapsedTimeMetric; 
@property (nonatomic,readonly) BOOL isMemoryFootprintMetric; 
@property (nonatomic,readonly) NSNumber * initialResidentMemory; 
@property (nonatomic,readonly) NSNumber * initialResidentMemoryPeak; 
@property (nonatomic,readonly) NSNumber * initialPhysicalFootprint; 
@property (nonatomic,readonly) NSNumber * finalResidentMemory; 
@property (nonatomic,readonly) NSNumber * finalResidentMemoryPeak; 
@property (nonatomic,readonly) NSNumber * finalPhysicalFootprint; 
@property (nonatomic,readonly) NSNumber * residentMemoryDelta; 
@property (nonatomic,readonly) NSNumber * residentMemoryPeakDelta; 
@property (nonatomic,readonly) NSNumber * physicalFootprintDelta; 
@property (nonatomic,readonly) NSNumber * initialTime; 
@property (nonatomic,readonly) NSNumber * finalTime; 
@property (nonatomic,readonly) NSNumber * elapsedTime; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)start;
-(void)finish;
-(void)_commonInit;
-(NSNumber *)elapsedTime;
-(id)initWithName:(id)arg1 metrics:(long long)arg2 ;
-(NSNumber *)initialTime;
-(void)setRepresentedMetrics:(long long)arg1 ;
-(BOOL)isElapsedTimeMetric;
-(BOOL)isMemoryFootprintMetric;
-(long long)representedMetrics;
-(NSNumber *)initialResidentMemory;
-(NSNumber *)finalResidentMemory;
-(NSNumber *)initialResidentMemoryPeak;
-(NSNumber *)finalResidentMemoryPeak;
-(NSNumber *)initialPhysicalFootprint;
-(NSNumber *)finalPhysicalFootprint;
-(NSNumber *)finalTime;
-(void)_capturMachAbsoluteTime:(unsigned long long*)arg1 taskInfo:(mach_task_basic_info*)arg2 vmInfo:(task_vm_info*)arg3 ;
-(NSNumber *)physicalFootprintDelta;
-(NSNumber *)residentMemoryDelta;
-(NSNumber *)residentMemoryPeakDelta;
@end


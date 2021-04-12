/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface AXMDiagnostics : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_diagnosticMetrics;
	NSMutableArray* _queue_visionObservations;
	BOOL _diagnosticsEnabled;

}

@property (assign,nonatomic) BOOL diagnosticsEnabled;                          //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metrics; 
@property (nonatomic,copy,readonly) NSArray * visionObservations; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSArray *)metrics;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(void)addMetric:(id)arg1 ;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 signpostStartBlock:(/*^block*/id)arg4 signpostEndBlock:(/*^block*/id)arg5 ;
-(void)clearMetrics;
-(id)startMeasurement:(long long)arg1 name:(id)arg2 ;
-(void)appendVisionObservations:(id)arg1 ;
-(NSArray *)visionObservations;
@end


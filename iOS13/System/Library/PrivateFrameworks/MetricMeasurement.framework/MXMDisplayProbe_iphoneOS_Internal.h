/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/MXMDisplayProbePlatform.h>

@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;
@class MXMDisplayDescriptor, NSObject, NSString;

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform> {

	id<MXMDisplayProbePlatformDelegate> _delegate;
	MXMDisplayDescriptor* _displayDescriptor;
	SCD_Struct_MX4 _lastSample;
	NSObject*<OS_dispatch_queue> _queue;
	double _pollRate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MXMDisplayProbePlatformDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)_displayIndexWithDescriptor:(id)arg1 ;
+(id)_allDescriptors;
-(id<MXMDisplayProbePlatformDelegate>)delegate;
-(void)setDelegate:(id<MXMDisplayProbePlatformDelegate>)arg1 ;
-(void)_start;
-(void)_stop;
-(void)_loop;
-(void)_pollMain;
-(id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2 ;
-(SCD_Struct_MX4)_pollDisplayForSample;
@end


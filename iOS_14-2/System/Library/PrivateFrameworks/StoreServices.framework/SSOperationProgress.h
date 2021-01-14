/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {

	BOOL _canPause;
	double _changeRate;
	long long _currentValue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	long long _operationType;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	long long _units;

}

@property (assign) BOOL canPause; 
@property (assign) long long operationType; 
@property (assign) double changeRate; 
@property (assign) long long currentValue; 
@property (assign) double estimatedTimeRemaining; 
@property (assign) long long maxValue; 
@property (assign) long long units; 
@property (assign) long long normalizedCurrentValue; 
@property (assign) long long normalizedMaxValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)snapshot;
-(long long)units;
-(long long)operationType;
-(void)setUnits:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setMaxValue:(long long)arg1 ;
-(id)init;
-(void)setNormalizedCurrentValue:(long long)arg1 ;
-(void)setNormalizedMaxValue:(long long)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(double)estimatedTimeRemaining;
-(NSString *)description;
-(long long)normalizedCurrentValue;
-(long long)normalizedMaxValue;
-(double)changeRate;
-(void)_updateStatisticsFromSnapshots;
-(void)resetSnapshots;
-(void)setChangeRate:(double)arg1 ;
-(BOOL)canPause;
-(void)setOperationType:(long long)arg1 ;
-(long long)currentValue;
-(void)setCanPause:(BOOL)arg1 ;
-(long long)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentValue:(long long)arg1 ;
-(void)dealloc;
@end


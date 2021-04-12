/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(long long)operationType;
-(void)setOperationType:(long long)arg1 ;
-(void)snapshot;
-(long long)currentValue;
-(void)setCurrentValue:(long long)arg1 ;
-(long long)units;
-(void)setUnits:(long long)arg1 ;
-(long long)maxValue;
-(void)setMaxValue:(long long)arg1 ;
-(void)setCanPause:(BOOL)arg1 ;
-(BOOL)canPause;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setNormalizedCurrentValue:(long long)arg1 ;
-(void)setNormalizedMaxValue:(long long)arg1 ;
-(long long)normalizedCurrentValue;
-(long long)normalizedMaxValue;
-(double)changeRate;
-(void)_updateStatisticsFromSnapshots;
-(void)resetSnapshots;
-(void)setChangeRate:(double)arg1 ;
@end


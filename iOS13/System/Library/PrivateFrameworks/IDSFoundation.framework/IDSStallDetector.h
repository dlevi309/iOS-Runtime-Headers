/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSStallDetector : NSObject {

	BOOL _verboseLogging;
	os_unfair_lock_s _lock;
	/*^block*/id _stallDetectedBlock;
	/*^block*/id _stallWarningBlock;
	unsigned long long _consumeDelayThreshold;
	double _byteMovementDelayThreshold;
	NSMutableArray* _bytesHistory;
	NSMutableArray* _bytesTimestamps;

}

@property (assign,nonatomic) BOOL verboseLogging;                                   //@synthesize verboseLogging=_verboseLogging - In the implementation block
@property (assign,nonatomic) unsigned long long consumeDelayThreshold; 
@property (assign,nonatomic) double byteMovementDelayThreshold; 
+(id)newDetectorWithName:(id)arg1 stallDetectedBlock:(/*^block*/id)arg2 stallWarningBlock:(/*^block*/id)arg3 ;
+(id)detectorWithName:(id)arg1 ;
+(void)removeDetectorWithName:(id)arg1 ;
-(void)reset;
-(BOOL)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3 ;
-(unsigned long long)consumeDelayThreshold;
-(void)setConsumeDelayThreshold:(unsigned long long)arg1 ;
-(double)byteMovementDelayThreshold;
-(void)setByteMovementDelayThreshold:(double)arg1 ;
-(BOOL)byteMovementCheckForEvent:(id)arg1 ;
-(void)produceBytes:(int)arg1 ;
-(void)consumeBytes:(int)arg1 ;
-(void)forceTriggerStallDetectedBlockWithEventName:(id)arg1 ;
-(BOOL)verboseLogging;
-(void)setVerboseLogging:(BOOL)arg1 ;
@end


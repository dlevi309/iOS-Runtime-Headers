/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSMutableDictionary;

@interface RPConnectionMetrics : NSObject {

	os_unfair_lock_s _reportLock;
	NSObject*<OS_dispatch_queue> _reportQueue;
	NSObject*<OS_dispatch_source> _reportTimer;
	BOOL _sendReport;
	unsigned long long _eventCount;
	NSMutableDictionary* _metrics;

}

@property (nonatomic,retain) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(id)sharedMetrics;
-(void)setMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metrics;
-(id)init;
-(void)logRequestOnLinkType:(int)arg1 length:(unsigned long long)arg2 rtt:(unsigned long long)arg3 ;
-(void)reportMetrics;
-(unsigned char)linkTypeToBucketIndex:(int)arg1 ;
-(unsigned char)lengthToBucketIndex:(unsigned long long)arg1 ;
-(unsigned char)rttToBucketIndex:(unsigned long long)arg1 ;
@end


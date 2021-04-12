/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _error;
	int _processingType;
	BOOL _fileBacked;
	unsigned _commitDurationInMilliseconds;
	unsigned _flushDurationInMilliseconds;

}

@property (assign,nonatomic) int error;                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int processingType;                                 //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL fileBacked;                                    //@synthesize fileBacked=_fileBacked - In the implementation block
@property (assign,nonatomic) unsigned commitDurationInMilliseconds;              //@synthesize commitDurationInMilliseconds=_commitDurationInMilliseconds - In the implementation block
@property (assign,nonatomic) unsigned flushDurationInMilliseconds;               //@synthesize flushDurationInMilliseconds=_flushDurationInMilliseconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)eventName;
-(void)setError:(int)arg1 ;
-(int)error;
-(id)eventDictionary;
-(void)setCommitDurationInMilliseconds:(unsigned)arg1 ;
-(void)setFlushDurationInMilliseconds:(unsigned)arg1 ;
-(BOOL)fileBacked;
-(unsigned)commitDurationInMilliseconds;
-(unsigned)flushDurationInMilliseconds;
-(void)reset;
-(int)processingType;
-(void)setProcessingType:(int)arg1 ;
-(void)setFileBacked:(BOOL)arg1 ;
-(void)dealloc;
@end


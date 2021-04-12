/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(int)error;
-(void)setError:(int)arg1 ;
-(void)reset;
-(id)eventName;
-(int)processingType;
-(id)eventDictionary;
-(void)setProcessingType:(int)arg1 ;
-(BOOL)fileBacked;
-(void)setFileBacked:(BOOL)arg1 ;
-(unsigned)commitDurationInMilliseconds;
-(void)setCommitDurationInMilliseconds:(unsigned)arg1 ;
-(unsigned)flushDurationInMilliseconds;
-(void)setFlushDurationInMilliseconds:(unsigned)arg1 ;
@end


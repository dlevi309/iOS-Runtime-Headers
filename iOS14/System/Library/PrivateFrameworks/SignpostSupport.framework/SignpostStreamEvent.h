/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostEvent.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SignpostStreamEvent : SignpostEvent {

	unsigned long long _totalFrameCount;
	NSObject*<OS_dispatch_source> _timeoutSource;
	unsigned long long _serialNumber;

}

@property (assign,nonatomic) unsigned long long _totalFrameCount;                      //@synthesize totalFrameCount=_totalFrameCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;              //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;                          //@synthesize serialNumber=_serialNumber - In the implementation block
+(id)serializationTypeNumber;
-(id)initWithOSLogEventProxy:(id)arg1 serialNumber:(unsigned long long)arg2 shouldCollectFrameInfo:(BOOL)arg3 timeoutInSec:(unsigned long long)arg4 timeoutHandlingQueue:(id)arg5 timeoutHandlingBlock:(/*^block*/id)arg6 ;
-(unsigned long long)serialNumber;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(BOOL)_hasTotalFrames;
-(void)set_totalFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)_totalFrameCount;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
@end


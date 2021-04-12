/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject {

	NSFileHandle* _lookasideFileHandle;
	NSString* _lookasideFilePath;
	BOOL _isOutgoingTraffic;
	BOOL _didFlushLogs;

}

@property (assign,nonatomic) BOOL isOutgoingTraffic;              //@synthesize isOutgoingTraffic=_isOutgoingTraffic - In the implementation block
+(id)_logQueue;
-(void)dealloc;
-(void)flushLogs;
-(void)setIsOutgoingTraffic:(BOOL)arg1 ;
-(void)logWBXMLData:(id)arg1 ;
-(void)logPlainTextData:(id)arg1 ;
-(void)_moveLogFileContentsAtPath:(id)arg1 ;
-(void)_openLookasideFile;
-(BOOL)isOutgoingTraffic;
@end


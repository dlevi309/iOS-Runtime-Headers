/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsOutgoingTraffic:(BOOL)arg1 ;
-(void)logWBXMLData:(id)arg1 ;
-(void)flushLogs;
-(void)logPlainTextData:(id)arg1 ;
-(void)_moveLogFileContentsAtPath:(id)arg1 ;
-(void)_openLookasideFile;
-(BOOL)isOutgoingTraffic;
@end


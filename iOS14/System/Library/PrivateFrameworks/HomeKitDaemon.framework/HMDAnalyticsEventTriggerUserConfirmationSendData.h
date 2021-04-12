/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsEventTriggerUserConfirmationSendData : HMFObject {

	int _resultErrorCode;
	unsigned long long _timestamp;
	NSString* _sessionID;

}

@property (assign) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int resultErrorCode;                       //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (nonatomic,copy) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setResultErrorCode:(int)arg1 ;
-(int)resultErrorCode;
@end


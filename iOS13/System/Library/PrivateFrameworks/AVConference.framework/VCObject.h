/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSString;

@interface VCObject : NSObject {

	NSString* _logPrefix;
	opaque_pthread_mutex_t _mutex;
	id _reportingAgent;

}

@property (nonatomic,retain) NSString * logPrefix;                              //@synthesize logPrefix=_logPrefix - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSString *)logPrefix;
-(void)setLogPrefix:(NSString *)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
@end


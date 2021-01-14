/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAMailboxRequest : NSObject {

	int _requestType;
	int _bodyFormat;
	NSString* _messageID;

}

@property (assign,nonatomic) int requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) int bodyFormat;                  //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (nonatomic,copy) NSString * messageID;              //@synthesize messageID=_messageID - In the implementation block
-(BOOL)mf_alwaysReportFailures;
-(void)setRequestType:(int)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(id)init;
-(int)requestType;
-(void)setBodyFormat:(int)arg1 ;
-(int)bodyFormat;
-(NSString *)messageID;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/


@interface SLGNotificationActivatedLoggerRegistration : NSObject {

	int _beginToken;
	int _endToken;

}

@property (assign,nonatomic) int beginToken;              //@synthesize beginToken=_beginToken - In the implementation block
@property (assign,nonatomic) int endToken;                //@synthesize endToken=_endToken - In the implementation block
+(id)registrationWithBeginToken:(int)arg1 endToken:(int)arg2 ;
-(int)endToken;
-(void)setEndToken:(int)arg1 ;
-(int)beginToken;
-(void)setBeginToken:(int)arg1 ;
@end


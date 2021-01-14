/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@interface TUIAnalyticsSession : NSObject {

	BOOL _sessionActive;

}

@property (getter=isSessionActive,nonatomic,readonly) BOOL sessionActive;              //@synthesize sessionActive=_sessionActive - In the implementation block
+(id)preferredEventName:(id)arg1 ;
+(id)currentInputModeIdentifier;
-(void)beginSession;
-(BOOL)isSessionActive;
-(void)endSession;
-(void)dealloc;
@end


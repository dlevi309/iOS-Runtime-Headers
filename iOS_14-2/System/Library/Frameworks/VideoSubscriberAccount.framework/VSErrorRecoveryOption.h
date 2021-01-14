/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSString;

@interface VSErrorRecoveryOption : NSObject {

	BOOL _destructive;
	NSString* _localizedAlertButtonTitle;
	/*^block*/id _attemptHandler;

}

@property (nonatomic,copy) NSString * localizedAlertButtonTitle;                 //@synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id attemptHandler;                                    //@synthesize attemptHandler=_attemptHandler - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
-(BOOL)isDestructive;
-(void)setDestructive:(BOOL)arg1 ;
-(id)attemptHandler;
-(NSString *)localizedAlertButtonTitle;
-(void)setLocalizedAlertButtonTitle:(NSString *)arg1 ;
-(void)setAttemptHandler:(id)arg1 ;
@end


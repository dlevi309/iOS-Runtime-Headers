/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface SFTelephonyURLRequest : NSObject {

	NSString* _successNotificationName;
	NSString* _failureNotificationName;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSString * successNotificationName;              //@synthesize successNotificationName=_successNotificationName - In the implementation block
@property (nonatomic,retain) NSString * failureNotificationName;              //@synthesize failureNotificationName=_failureNotificationName - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)successNotificationName;
-(void)setSuccessNotificationName:(NSString *)arg1 ;
-(NSString *)failureNotificationName;
-(void)setFailureNotificationName:(NSString *)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end


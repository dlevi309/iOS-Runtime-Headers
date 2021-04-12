/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


#import <SafariServices/SafariServices-Structs.h>
@class NSString;

@interface SFSystemAlert : NSObject {

	CFUserNotificationRef _cfNotification;
	CFRunLoopSourceRef _cfRunloopSource;
	NSString* _title;
	NSString* _message;
	NSString* _affirmativeButtonTitle;
	NSString* _negativeButtonTitle;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)webAuthenticationAlertForDomain:(id)arg1 appBundleID:(id)arg2 ;
+(id)_displayNameForBundleID:(id)arg1 ;
+(id)readingListAlertForDomain:(id)arg1 appBundleID:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)scheduleWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 affirmativeButtonTitle:(id)arg3 negativeButtonTitle:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
@end


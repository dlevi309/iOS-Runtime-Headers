/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString, NSDictionary;

@interface HDUserNotification : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _defaultButton;
	NSString* _cancelButton;
	NSString* _otherButton;
	NSDictionary* _additionalDescriptors;
	long long _alertLevel;
	unsigned long long _userNotificationOptions;
	/*^block*/id _responseHandler;
	CFUserNotificationRef _notification;

}

@property (nonatomic,copy) id responseHandler;                                        //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef notification;                      //@synthesize notification=_notification - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButton;                                  //@synthesize defaultButton=_defaultButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButton;                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) NSString * otherButton;                                    //@synthesize otherButton=_otherButton - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalDescriptors;                      //@synthesize additionalDescriptors=_additionalDescriptors - In the implementation block
@property (assign,nonatomic) long long alertLevel;                                    //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) unsigned long long userNotificationOptions;              //@synthesize userNotificationOptions=_userNotificationOptions - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)cancelButton;
-(void)setCancelButton:(NSString *)arg1 ;
-(NSString *)message;
-(void)setNotification:(CFUserNotificationRef)arg1 ;
-(CFUserNotificationRef)notification;
-(NSString *)defaultButton;
-(void)setDefaultButton:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)responseHandler;
-(long long)alertLevel;
-(void)setAlertLevel:(long long)arg1 ;
-(void)_handleResponse:(unsigned long long)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NSString *)title;
-(void)presentWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setOtherButton:(NSString *)arg1 ;
-(unsigned long long)userNotificationOptions;
-(NSString *)otherButton;
-(NSDictionary *)additionalDescriptors;
-(void)setAdditionalDescriptors:(NSDictionary *)arg1 ;
-(void)setUserNotificationOptions:(unsigned long long)arg1 ;
@end


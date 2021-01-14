/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSXPCConnection, NSObject, NSDictionary, NSURL, NSString;

@interface SFUserAlert : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CFUserNotificationRef _cfNotif;
	NSXPCConnection* _xpcCnx;
	CFRunLoopSourceRef _runLoopSrc;
	BOOL _asBanner;
	BOOL _textInput;
	BOOL _hasDefaultButton;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _responseHandler;
	/*^block*/id _textResponseHandler;
	/*^block*/id _dictionaryResponseHandler;
	NSDictionary* _additionalInfo;
	NSURL* _iconURL;
	NSString* _message;
	NSURL* _soundURL;
	NSString* _textInputTitle;
	double _timeout;
	NSString* _title;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id responseHandler;                                        //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id textResponseHandler;                                    //@synthesize textResponseHandler=_textResponseHandler - In the implementation block
@property (nonatomic,copy) id dictionaryResponseHandler;                              //@synthesize dictionaryResponseHandler=_dictionaryResponseHandler - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                           //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (assign,nonatomic) BOOL asBanner;                                           //@synthesize asBanner=_asBanner - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                         //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSURL * soundURL;                                        //@synthesize soundURL=_soundURL - In the implementation block
@property (assign,nonatomic) BOOL textInput;                                          //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,retain) NSString * textInputTitle;                               //@synthesize textInputTitle=_textInputTitle - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultButton;                                   //@synthesize hasDefaultButton=_hasDefaultButton - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonTitle;                           //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonTitle;                         //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * otherButtonTitle;                             //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)errorHandler;
-(void)_invalidate;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setErrorHandler:(id)arg1 ;
-(id)init;
-(NSString *)alternateButtonTitle;
-(void)present;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(double)timeout;
-(void)_presentBanner;
-(CFUserNotificationRef)createNotification;
-(id)_mergedDict;
-(id)_defaultDictionary;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(void)_updateNotification;
-(id)textResponseHandler;
-(void)setTextResponseHandler:(id)arg1 ;
-(id)dictionaryResponseHandler;
-(void)setDictionaryResponseHandler:(id)arg1 ;
-(void)setAsBanner:(BOOL)arg1 ;
-(void)setSoundURL:(NSURL *)arg1 ;
-(NSString *)textInputTitle;
-(void)setTextInputTitle:(NSString *)arg1 ;
-(BOOL)hasDefaultButton;
-(void)setHasDefaultButton:(BOOL)arg1 ;
-(id)responseHandler;
-(void)_ensureXPCStarted;
-(BOOL)textInput;
-(void)setResponseHandler:(id)arg1 ;
-(void)_present;
-(void)_interrupted;
-(NSString *)defaultButtonTitle;
-(NSDictionary *)additionalInfo;
-(void)_invalidated;
-(BOOL)asBanner;
-(NSURL *)soundURL;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NSURL *)iconURL;
-(void)userNotificationError:(id)arg1 ;
-(void)_postNotification:(CFUserNotificationRef)arg1 ;
-(void)userNotificationResponse:(int)arg1 ;
-(void)userNotificationTextResponse:(id)arg1 ;
-(void)userNotificationDictionaryResponse:(id)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(void)setTextInput:(BOOL)arg1 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end


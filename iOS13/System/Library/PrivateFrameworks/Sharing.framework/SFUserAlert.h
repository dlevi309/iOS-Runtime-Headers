/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)present;
-(BOOL)textInput;
-(void)setTextInput:(BOOL)arg1 ;
-(void)_present;
-(void)_ensureXPCStarted;
-(NSDictionary *)additionalInfo;
-(void)userNotificationError:(id)arg1 ;
-(void)userNotificationResponse:(int)arg1 ;
-(void)userNotificationTextResponse:(id)arg1 ;
-(void)userNotificationDictionaryResponse:(id)arg1 ;
-(void)_presentBanner;
-(CFUserNotificationRef)createNotification;
-(void)_postNotification:(CFUserNotificationRef)arg1 ;
-(id)_mergedDict;
-(id)_defaultDictionary;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(void)_updateNotification;
-(id)textResponseHandler;
-(void)setTextResponseHandler:(id)arg1 ;
-(id)dictionaryResponseHandler;
-(void)setDictionaryResponseHandler:(id)arg1 ;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(BOOL)asBanner;
-(void)setAsBanner:(BOOL)arg1 ;
-(NSURL *)iconURL;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSURL *)soundURL;
-(void)setSoundURL:(NSURL *)arg1 ;
-(NSString *)textInputTitle;
-(void)setTextInputTitle:(NSString *)arg1 ;
-(BOOL)hasDefaultButton;
-(void)setHasDefaultButton:(BOOL)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
@end


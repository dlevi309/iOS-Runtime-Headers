/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


@protocol OS_dispatch_queue;
#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSObject, NSString;

@interface ENUserAlert : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _dismissed;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userRLS;
	BOOL _showOnLockScreen;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _titleKey;
	NSString* _titleParameter;
	NSString* _subTitleKey;
	NSObject* _subTitleParameter;
	NSString* _defaultButtonTitleKey;
	NSString* _alternativeButtonTitleKey;
	double _timeoutSeconds;
	/*^block*/id _actionHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * titleKey;                                       //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,copy) NSString * titleParameter;                                 //@synthesize titleParameter=_titleParameter - In the implementation block
@property (nonatomic,copy) NSString * subTitleKey;                                    //@synthesize subTitleKey=_subTitleKey - In the implementation block
@property (nonatomic,copy) NSObject * subTitleParameter;                              //@synthesize subTitleParameter=_subTitleParameter - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitleKey;                          //@synthesize defaultButtonTitleKey=_defaultButtonTitleKey - In the implementation block
@property (nonatomic,copy) NSString * alternativeButtonTitleKey;                      //@synthesize alternativeButtonTitleKey=_alternativeButtonTitleKey - In the implementation block
@property (assign,nonatomic) BOOL showOnLockScreen;                                   //@synthesize showOnLockScreen=_showOnLockScreen - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                   //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
-(double)timeoutSeconds;
-(id)init;
-(void)setShowOnLockScreen:(BOOL)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)actionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setActionHandler:(id)arg1 ;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(void)_invalidated;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)showOnLockScreen;
-(id)invalidationHandler;
-(void)dealloc;
-(void)_activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_autoInvalidate;
-(void)_responseCallback:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(NSString *)titleParameter;
-(void)setTitleParameter:(NSString *)arg1 ;
-(NSString *)subTitleKey;
-(void)setSubTitleKey:(NSString *)arg1 ;
-(NSObject *)subTitleParameter;
-(void)setSubTitleParameter:(NSObject *)arg1 ;
-(NSString *)defaultButtonTitleKey;
-(void)setDefaultButtonTitleKey:(NSString *)arg1 ;
-(NSString *)alternativeButtonTitleKey;
-(void)setAlternativeButtonTitleKey:(NSString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString;

@interface MCUserNotificationQueueEntry : NSObject {

	BOOL _displayOnLockScreen;
	BOOL _dismissOnLock;
	BOOL _displayInAppWhitelistModes;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonText;
	NSString* _alternateButtonText;
	NSString* _otherButtonText;
	double _dismissAfterTimeInterval;
	/*^block*/id _completionBlock;
	id _notification;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonText;                 //@synthesize defaultButtonText=_defaultButtonText - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonText;               //@synthesize alternateButtonText=_alternateButtonText - In the implementation block
@property (nonatomic,retain) NSString * otherButtonText;                   //@synthesize otherButtonText=_otherButtonText - In the implementation block
@property (assign,nonatomic) BOOL displayOnLockScreen;                     //@synthesize displayOnLockScreen=_displayOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL dismissOnLock;                           //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign,nonatomic) BOOL displayInAppWhitelistModes;              //@synthesize displayInAppWhitelistModes=_displayInAppWhitelistModes - In the implementation block
@property (assign,nonatomic) double dismissAfterTimeInterval;              //@synthesize dismissAfterTimeInterval=_dismissAfterTimeInterval - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id notification;                              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)message;
-(void)setNotification:(id)arg1 ;
-(id)notification;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonText;
-(void)setDefaultButtonText:(NSString *)arg1 ;
-(NSString *)alternateButtonText;
-(void)setAlternateButtonText:(NSString *)arg1 ;
-(NSString *)otherButtonText;
-(void)setOtherButtonText:(NSString *)arg1 ;
-(BOOL)displayOnLockScreen;
-(void)setDisplayOnLockScreen:(BOOL)arg1 ;
-(BOOL)displayInAppWhitelistModes;
-(void)setDisplayInAppWhitelistModes:(BOOL)arg1 ;
-(double)dismissAfterTimeInterval;
-(void)setDismissAfterTimeInterval:(double)arg1 ;
-(BOOL)dismissOnLock;
-(void)setDismissOnLock:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
@end


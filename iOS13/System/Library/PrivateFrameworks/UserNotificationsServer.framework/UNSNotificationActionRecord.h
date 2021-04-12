/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString, NSArray, NSURL;

@interface UNSNotificationActionRecord : NSObject {

	BOOL _authenticationRequired;
	BOOL _destructive;
	BOOL _foreground;
	BOOL _shouldPreventNotificationDismiss;
	NSString* _actionType;
	NSString* _identifier;
	NSString* _textInputButtonTitle;
	NSArray* _textInputButtonTitleLocalizationArguments;
	NSString* _textInputButtonTitleLocalizationKey;
	NSString* _textInputPlaceholder;
	NSArray* _textInputPlaceholderLocalizationArguments;
	NSString* _textInputPlaceholderLocalizationKey;
	NSString* _title;
	NSArray* _titleLocalizationArguments;
	NSString* _titleLocalizationKey;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * actionType;                                                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                                    //@synthesize destructive=_destructive - In the implementation block
@property (assign,getter=isForeground,nonatomic) BOOL foreground;                                      //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventNotificationDismiss;                                    //@synthesize shouldPreventNotificationDismiss=_shouldPreventNotificationDismiss - In the implementation block
@property (nonatomic,copy) NSString * textInputButtonTitle;                                            //@synthesize textInputButtonTitle=_textInputButtonTitle - In the implementation block
@property (nonatomic,copy) NSArray * textInputButtonTitleLocalizationArguments;                        //@synthesize textInputButtonTitleLocalizationArguments=_textInputButtonTitleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * textInputButtonTitleLocalizationKey;                             //@synthesize textInputButtonTitleLocalizationKey=_textInputButtonTitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * textInputPlaceholder;                                            //@synthesize textInputPlaceholder=_textInputPlaceholder - In the implementation block
@property (nonatomic,copy) NSArray * textInputPlaceholderLocalizationArguments;                        //@synthesize textInputPlaceholderLocalizationArguments=_textInputPlaceholderLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * textInputPlaceholderLocalizationKey;                             //@synthesize textInputPlaceholderLocalizationKey=_textInputPlaceholderLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArguments;                                       //@synthesize titleLocalizationArguments=_titleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                                            //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                                //@synthesize url=_url - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)isForeground;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isAuthenticationRequired;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(NSString *)textInputButtonTitle;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(NSString *)titleLocalizationKey;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)textInputPlaceholder;
-(void)setTextInputButtonTitle:(NSString *)arg1 ;
-(void)setTextInputPlaceholder:(NSString *)arg1 ;
-(void)setShouldPreventNotificationDismiss:(BOOL)arg1 ;
-(void)setTitleLocalizationArguments:(NSArray *)arg1 ;
-(NSArray *)titleLocalizationArguments;
-(BOOL)shouldPreventNotificationDismiss;
-(NSString *)textInputButtonTitleLocalizationKey;
-(NSArray *)textInputButtonTitleLocalizationArguments;
-(NSString *)textInputPlaceholderLocalizationKey;
-(NSArray *)textInputPlaceholderLocalizationArguments;
-(void)setTextInputButtonTitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setTextInputButtonTitleLocalizationKey:(NSString *)arg1 ;
-(void)setTextInputPlaceholderLocalizationArguments:(NSArray *)arg1 ;
-(void)setTextInputPlaceholderLocalizationKey:(NSString *)arg1 ;
@end


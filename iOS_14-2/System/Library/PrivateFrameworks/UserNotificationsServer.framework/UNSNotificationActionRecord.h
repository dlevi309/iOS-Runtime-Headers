/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setTitleLocalizationArguments:(NSArray *)arg1 ;
-(NSArray *)titleLocalizationArguments;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(NSString *)titleLocalizationKey;
-(NSArray *)textInputPlaceholderLocalizationArguments;
-(BOOL)isAuthenticationRequired;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTextInputPlaceholder:(NSString *)arg1 ;
-(NSArray *)textInputButtonTitleLocalizationArguments;
-(NSURL *)url;
-(NSString *)textInputButtonTitleLocalizationKey;
-(BOOL)isForeground;
-(id)description;
-(NSString *)textInputPlaceholder;
-(void)setTextInputButtonTitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTextInputPlaceholderLocalizationKey:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)textInputButtonTitle;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setDestructive:(BOOL)arg1 ;
-(void)setTextInputButtonTitleLocalizationKey:(NSString *)arg1 ;
-(void)setShouldPreventNotificationDismiss:(BOOL)arg1 ;
-(void)setTextInputButtonTitle:(NSString *)arg1 ;
-(void)setTextInputPlaceholderLocalizationArguments:(NSArray *)arg1 ;
-(NSString *)textInputPlaceholderLocalizationKey;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldPreventNotificationDismiss;
@end


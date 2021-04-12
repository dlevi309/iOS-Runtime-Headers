/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class NSString, NSURL, NSNumber, NSDictionary;

@interface ACCUserNotification : NSObject {

	BOOL _isModal;
	BOOL _dismissOnUnlock;
	BOOL _ignoreQuietMode;
	int _type;
	NSString* _uuid;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonName;
	NSString* _otherButtonName;
	NSURL* _iconURL;
	NSNumber* _systemSoundID;
	double _timeout;
	NSString* _identifier;
	NSString* _groupIdentifier;
	NSDictionary* _userNotificationCFDict;
	CFUserNotificationRef _userNotificationCF;

}

@property (nonatomic,retain) NSDictionary * userNotificationCFDict;                 //@synthesize userNotificationCFDict=_userNotificationCFDict - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef userNotificationCF;              //@synthesize userNotificationCF=_userNotificationCF - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonName;                            //@synthesize defaultButtonName=_defaultButtonName - In the implementation block
@property (nonatomic,copy) NSString * otherButtonName;                              //@synthesize otherButtonName=_otherButtonName - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                         //@synthesize iconURL=_iconURL - In the implementation block
@property (assign,nonatomic) BOOL isModal;                                          //@synthesize isModal=_isModal - In the implementation block
@property (assign,nonatomic) BOOL dismissOnUnlock;                                  //@synthesize dismissOnUnlock=_dismissOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL ignoreQuietMode;                                  //@synthesize ignoreQuietMode=_ignoreQuietMode - In the implementation block
@property (nonatomic,retain) NSNumber * systemSoundID;                              //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(id)init;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)uuid;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSNumber *)systemSoundID;
-(NSURL *)iconURL;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setIsModal:(BOOL)arg1 ;
-(BOOL)isModal;
-(void)setSystemSoundID:(NSNumber *)arg1 ;
-(CFUserNotificationRef)userNotificationCF;
-(void)setUserNotificationCF:(CFUserNotificationRef)arg1 ;
-(BOOL)dismissOnUnlock;
-(BOOL)ignoreQuietMode;
-(NSString *)defaultButtonName;
-(NSString *)otherButtonName;
-(void)setUserNotificationCFDict:(NSDictionary *)arg1 ;
-(void)createBackingUserNotification;
-(void)setDefaultButtonName:(NSString *)arg1 ;
-(void)setOtherButtonName:(NSString *)arg1 ;
-(void)setDismissOnUnlock:(BOOL)arg1 ;
-(void)setIgnoreQuietMode:(BOOL)arg1 ;
-(NSDictionary *)userNotificationCFDict;
@end


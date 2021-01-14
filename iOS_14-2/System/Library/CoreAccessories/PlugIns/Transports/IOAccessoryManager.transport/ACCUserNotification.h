/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)uuid;
-(NSString *)groupIdentifier;
-(BOOL)isModal;
-(id)init;
-(void)setIsModal:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setType:(int)arg1 ;
-(void)setSystemSoundID:(NSNumber *)arg1 ;
-(NSNumber *)systemSoundID;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(NSString *)identifier;
-(NSString *)title;
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


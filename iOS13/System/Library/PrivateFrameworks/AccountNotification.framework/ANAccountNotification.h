/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ANCachedDictionaryRepresentationProtocol.h>

@class NSString, NSDate, ANNotificationAction, NSDictionary;

@interface ANAccountNotification : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol> {

	NSString* _identifier;
	NSString* _accountTypeID;
	NSString* _title;
	NSString* _message;
	NSDate* _date;
	NSString* _activateButtonTitle;
	ANNotificationAction* _activateAction;
	ANNotificationAction* _dismissAction;
	NSDictionary* _userInfo;
	NSString* _eventIdentifier;
	long long _destinations;
	long long _sectionSubtype;
	NSString* _callbackMachService;

}

@property (nonatomic,copy) NSString * callbackMachService;                       //@synthesize callbackMachService=_callbackMachService - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeID;                         //@synthesize accountTypeID=_accountTypeID - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * activateButtonTitle;                       //@synthesize activateButtonTitle=_activateButtonTitle - In the implementation block
@property (nonatomic,retain) ANNotificationAction * activateAction;              //@synthesize activateAction=_activateAction - In the implementation block
@property (nonatomic,retain) ANNotificationAction * dismissAction;               //@synthesize dismissAction=_dismissAction - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * eventIdentifier;                           //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (assign,nonatomic) long long destinations;                             //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) long long sectionSubtype;                           //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(long long)destinations;
-(void)setDestinations:(long long)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
-(ANNotificationAction *)activateAction;
-(void)setActivateAction:(ANNotificationAction *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setDismissAction:(ANNotificationAction *)arg1 ;
-(ANNotificationAction *)dismissAction;
-(long long)sectionSubtype;
-(NSString *)eventIdentifier;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setSectionSubtype:(long long)arg1 ;
-(id)initForAccountWithType:(id)arg1 ;
-(NSString *)accountTypeID;
-(NSString *)activateButtonTitle;
-(void)setActivateButtonTitle:(NSString *)arg1 ;
-(NSString *)callbackMachService;
-(void)setCallbackMachService:(NSString *)arg1 ;
@end


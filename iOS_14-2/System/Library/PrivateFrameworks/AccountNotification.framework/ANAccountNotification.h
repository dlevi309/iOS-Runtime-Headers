/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)eventIdentifier;
-(NSString *)message;
-(NSDictionary *)userInfo;
-(void)setDestinations:(long long)arg1 ;
-(long long)destinations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)description;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setDismissAction:(ANNotificationAction *)arg1 ;
-(ANNotificationAction *)dismissAction;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(id)initWithManagedObject:(id)arg1 ;
-(ANNotificationAction *)activateAction;
-(void)setSectionSubtype:(long long)arg1 ;
-(void)setActivateAction:(ANNotificationAction *)arg1 ;
-(long long)sectionSubtype;
-(NSString *)title;
-(NSString *)accountTypeID;
-(NSString *)activateButtonTitle;
-(void)setActivateButtonTitle:(NSString *)arg1 ;
-(NSString *)callbackMachService;
-(id)initForAccountWithType:(id)arg1 ;
-(void)setCallbackMachService:(NSString *)arg1 ;
@end


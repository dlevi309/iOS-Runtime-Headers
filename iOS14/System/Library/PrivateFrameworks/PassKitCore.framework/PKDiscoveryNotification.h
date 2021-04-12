/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSDate, NSURL;

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding> {

	BOOL _delivered;
	long long _actionType;
	NSDictionary* _actionInfo;
	NSString* _titleKey;
	NSString* _messageKey;
	NSString* _actionTitleKey;
	NSString* _localizedTitle;
	NSString* _localizedMessage;
	NSString* _localizedActionTitle;
	NSDate* _scheduledDeliveryDate;

}

@property (assign,nonatomic) long long actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * actionInfo;                              //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,copy) NSString * titleKey;                                      //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,copy) NSString * messageKey;                                    //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy) NSString * actionTitleKey;                                //@synthesize actionTitleKey=_actionTitleKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedMessage;                     //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedActionTitle;                 //@synthesize localizedActionTitle=_localizedActionTitle - In the implementation block
@property (nonatomic,readonly) long long passQualifier; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * discoveryCardIdentifier; 
@property (nonatomic,retain) NSDate * scheduledDeliveryDate;                         //@synthesize scheduledDeliveryDate=_scheduledDeliveryDate - In the implementation block
@property (assign,getter=isDelivered,nonatomic) BOOL delivered;                      //@synthesize delivered=_delivered - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setActionType:(long long)arg1 ;
-(NSString *)localizedTitle;
-(long long)actionType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)actionInfo;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)titleKey;
-(id)description;
-(void)setTitleKey:(NSString *)arg1 ;
-(NSString *)actionTitleKey;
-(void)setScheduledDeliveryDate:(NSDate *)arg1 ;
-(NSString *)localizedActionTitle;
-(long long)passQualifier;
-(NSString *)discoveryCardIdentifier;
-(void)localizeWithBundle:(id)arg1 ;
-(void)updateWithNotification:(id)arg1 ;
-(void)scheduleDeliveryForCurrentDate:(id)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(BOOL)isEqualForDisplayToNotification:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
-(void)setMessageKey:(NSString *)arg1 ;
-(void)setActionTitleKey:(NSString *)arg1 ;
-(NSDate *)scheduledDeliveryDate;
-(void)setDelivered:(BOOL)arg1 ;
-(BOOL)isDelivered;
-(NSString *)messageKey;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedMessage;
@end


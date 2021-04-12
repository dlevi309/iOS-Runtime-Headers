/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/

#import <iCloudQuotaDaemon/ICQDaemonPersisted.h>

@class NSString, _ICQAlertSpecification, _ICQFollowupSpecification;

@interface ICQDaemonOffer : ICQDaemonPersisted {

	NSString* _notificationID;
	NSString* _offerId;
	_ICQAlertSpecification* _internalAlertSpecification;
	_ICQFollowupSpecification* _internalFollowupSpecification;

}

@property (nonatomic,readonly) _ICQAlertSpecification * alertSpecification; 
@property (nonatomic,readonly) _ICQFollowupSpecification * followupSpecification; 
@property (nonatomic,retain) _ICQAlertSpecification * internalAlertSpecification;                    //@synthesize internalAlertSpecification=_internalAlertSpecification - In the implementation block
@property (nonatomic,retain) _ICQFollowupSpecification * internalFollowupSpecification;              //@synthesize internalFollowupSpecification=_internalFollowupSpecification - In the implementation block
@property (nonatomic,readonly) long long level; 
@property (getter=isBuddyOffer,nonatomic,readonly) BOOL buddyOffer; 
@property (getter=isDefaultOffer,nonatomic,readonly) BOOL defaultOffer; 
@property (nonatomic,retain) NSString * notificationID;                                              //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,copy) NSString * offerId;                                                       //@synthesize offerId=_offerId - In the implementation block
+(id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2 ;
+(id)defaultPlaceholderKeys;
+(id)persistenceKey;
+(id)substitutionForPlaceholderKey:(id)arg1 outIsBelowMin:(BOOL*)arg2 ;
+(id)substitutionsForPlaceholderKeys:(id)arg1 checkIfBelowMin:(BOOL)arg2 outIsMissingSubstitution:(BOOL*)arg3 ;
+(BOOL)placeholderExistsInString:(id)arg1 ;
+(id)placeholderKeysInString:(id)arg1 fromKeys:(id)arg2 ;
+(id)stringWithPlaceholderFormat:(id)arg1 substitutions:(id)arg2 ;
+(id)substitutionsForPlaceholderKeys:(id)arg1 ;
+(id)stringWithPlaceholderFormat:(id)arg1 ;
-(void)setNotificationID:(NSString *)arg1 ;
-(NSString *)offerId;
-(id)initWithDictionary:(id)arg1 ;
-(long long)level;
-(NSString *)notificationID;
-(void)setOfferId:(NSString *)arg1 ;
-(id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2 ;
-(void)_addSampleAlert;
-(BOOL)isBuddyOffer;
-(BOOL)isDefaultOffer;
-(id)_initWithAccount:(id)arg1 error:(id)arg2 ;
-(_ICQAlertSpecification *)alertSpecification;
-(_ICQFollowupSpecification *)followupSpecification;
-(void)setServerDictionary:(id)arg1 ;
-(void)_initSubclassFromServerDictionary;
-(id)_mutablePersistenceDictionary;
-(_ICQAlertSpecification *)internalAlertSpecification;
-(void)setInternalAlertSpecification:(_ICQAlertSpecification *)arg1 ;
-(_ICQFollowupSpecification *)internalFollowupSpecification;
-(void)setInternalFollowupSpecification:(_ICQFollowupSpecification *)arg1 ;
-(id)alertSpecificationForAlertKey:(id)arg1 ;
@end


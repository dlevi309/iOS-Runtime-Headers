/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCReorderableTagSubscription.h>

@class NSNumber, NSString, NSDate, NSURL;

@interface FCSubscription : NSObject <FCReorderableTagSubscription> {

	BOOL _notificationsEnabled;
	BOOL _canRetry;
	NSString* _subscriptionID;
	unsigned long long _subscriptionType;
	NSNumber* _order;
	NSDate* _dateAdded;
	unsigned long long _zone;
	unsigned long long _subscriptionOrigin;
	NSString* _tagID;
	NSString* _groupID;
	NSURL* _url;
	NSString* _title;
	NSURL* _pollingURL;
	NSString* _errorMessage;

}

@property (nonatomic,copy,readonly) NSString * subscriptionID;                     //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionType;                //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * order;                              //@synthesize order=_order - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateAdded;                            //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) BOOL notificationsEnabled;                          //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long zone;                            //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionOrigin;              //@synthesize subscriptionOrigin=_subscriptionOrigin - In the implementation block
@property (nonatomic,readonly) NSString * tagID;                                   //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                                 //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * pollingURL;                                 //@synthesize pollingURL=_pollingURL - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                            //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL canRetry;                                      //@synthesize canRetry=_canRetry - In the implementation block
+(id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
+(id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 order:(id)arg4 origin:(unsigned long long)arg5 groupID:(id)arg6 dateAdded:(id)arg7 notificationsEnabled:(BOOL)arg8 zone:(unsigned long long)arg9 ;
+(id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5 ;
-(unsigned long long)zone;
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(BOOL)canRetry;
-(long long)comparePriority:(id)arg1 ;
-(NSString *)groupID;
-(unsigned long long)subscriptionType;
-(NSString *)subscriptionID;
-(NSString *)errorMessage;
-(NSURL *)url;
-(id)description;
-(id)asCKRecord;
-(BOOL)notificationsEnabled;
-(BOOL)isTypePending;
-(id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5 ;
-(BOOL)isTypeMutedTag;
-(BOOL)isTypeAutoFavoriteTag;
-(id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 order:(id)arg6 origin:(unsigned long long)arg7 notificationsEnabled:(BOOL)arg8 zone:(unsigned long long)arg9 ;
-(unsigned long long)subscriptionOrigin;
-(id)copyWithOrder:(id)arg1 ;
-(BOOL)isTypeGroupableTag;
-(BOOL)isTypeIgnoredTag;
-(id)asReorderableTagSubscription;
-(NSURL *)pollingURL;
-(BOOL)isDeprecated;
-(unsigned long long)priority;
-(BOOL)isTypeTag;
-(NSDate *)dateAdded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSNumber *)order;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {

	BOOL _needsSessionReset;
	BOOL _landingPage;
	NSString* _contentID;
	NSString* _collectionID;
	NSNumber* _launchNumber;
	NSString* _userType;
	NSString* _launchType;

}

@property (nonatomic,readonly) BOOL landingPage;                     //@synthesize landingPage=_landingPage - In the implementation block
@property (nonatomic,retain) NSString * contentID;                   //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * launchNumber;              //@synthesize launchNumber=_launchNumber - In the implementation block
@property (nonatomic,readonly) NSString * userType;                  //@synthesize userType=_userType - In the implementation block
@property (nonatomic,retain) NSString * launchType;                  //@synthesize launchType=_launchType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)resetLaunchNumber;
+(id)_currentSessionEvents;
+(id)_initialSessionEvent;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 launchType:(id)arg3 ;
+(id)_latestSessionEvent;
+(id)firstLaunchEvent;
+(void)appSessionEndedWithType:(id)arg1 ;
+(id)lastRecordedLaunchType;
-(void)log;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)launchType;
-(id)userTypeString;
-(void)_aggregateLog;
-(NSString *)contentID;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 launchType:(id)arg3 ;
-(id)_initFirstLaunchEvent;
-(void)_updateLaunchCount;
-(void)persistKeys;
-(BOOL)landingPage;
-(NSString *)collectionID;
-(NSNumber *)launchNumber;
-(void)setContentID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)userType;
-(id)mutableAnalyticsEventRepresentation;
-(void)setLaunchType:(NSString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {

	NSNumber* _posted;
	NSNumber* _remaining;
	BOOL _landingPage;
	NSString* _contentID;
	NSString* _collectionID;
	NSString* _errorCode;

}

@property (nonatomic,readonly) BOOL landingPage;                            //@synthesize landingPage=_landingPage - In the implementation block
@property (nonatomic,retain) NSString * contentID;                          //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                       //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * notificationsPosted; 
@property (nonatomic,retain) NSString * errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)errorCode;
-(NSString *)contentID;
-(void)persistKeys;
-(BOOL)landingPage;
-(NSString *)collectionID;
-(void)setContentID:(NSString *)arg1 ;
-(NSNumber *)notificationsPosted;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end


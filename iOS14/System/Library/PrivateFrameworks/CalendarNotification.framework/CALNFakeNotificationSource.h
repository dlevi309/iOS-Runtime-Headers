/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNNotificationManager, CALNCalendarIconIdentifierProvider;
@class NSString, NSArray;

@interface CALNFakeNotificationSource : NSObject <CALNNotificationSource> {

	NSString* _sourceIdentifier;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;

}

@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;                            //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier;                                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_activeSources;
+(id)_activeSourcesQueue;
-(void)didReceiveResponse:(id)arg1 ;
-(NSArray *)categories;
-(id<CALNNotificationManager>)notificationManager;
-(id)initWithNotificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 sourceIdentifierSuffix:(id)arg3 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)refreshNotifications:(id)arg1 ;
-(void)postFakeNotification;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end


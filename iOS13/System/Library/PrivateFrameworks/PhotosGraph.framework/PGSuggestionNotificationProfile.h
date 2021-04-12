/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class NSArray, NSSet, NSDate, NSObject;

@interface PGSuggestionNotificationProfile : NSObject {

	NSArray* _existingSuggestions;
	BOOL _eligibleForNotification;
	unsigned char _userType;
	NSSet* _shareParticipantContactIdentifiers;
	NSDate* _dateOfLastNotification;
	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) BOOL eligibleForNotification; 
@property (nonatomic,readonly) unsigned char userType; 
@property (nonatomic,readonly) NSDate * dateOfLastNotification; 
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1 ;
+(unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1 ;
-(unsigned char)userType;
-(BOOL)eligibleForNotification;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithExistingSuggestions:(id)arg1 ;
-(id)shareParticipantContactIdentifiers;
-(NSDate *)dateOfLastNotification;
-(BOOL)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2 ;
-(void)_determineUserTypeAndEligibility;
-(unsigned char)notificationQualityForHighlightNode:(id)arg1 ;
-(unsigned char)notificationQualityForEnrichableEvent:(id)arg1 ;
@end


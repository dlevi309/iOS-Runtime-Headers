/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationManagementContentProviderDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementSuggestionDelegate.h>

@protocol NCNotificationManagementSuggestionManagerDelegate;
@class NSMutableDictionary, NSMutableSet, NCNotificationRequest, NSString;

@interface NCNotificationManagementSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate> {

	BOOL _deviceAuthenticated;
	id<NCNotificationManagementSuggestionManagerDelegate> _delegate;
	NSMutableDictionary* _notificationManagementSuggestionContentProviders;
	NSMutableSet* _sectionIdentifiersWithNotificationManagementSuggestions;
	NCNotificationRequest* _requestWithRemoteNotificationManagementSuggestion;
	NCNotificationRequest* _requestWithProvisionalNotificationManagementSuggestion;
	double _scoreForRequestWithRemoteNotificationManagementSuggestion;

}

@property (nonatomic,retain) NSMutableDictionary * notificationManagementSuggestionContentProviders;                      //@synthesize notificationManagementSuggestionContentProviders=_notificationManagementSuggestionContentProviders - In the implementation block
@property (nonatomic,retain) NSMutableSet * sectionIdentifiersWithNotificationManagementSuggestions;                      //@synthesize sectionIdentifiersWithNotificationManagementSuggestions=_sectionIdentifiersWithNotificationManagementSuggestions - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * requestWithRemoteNotificationManagementSuggestion;                   //@synthesize requestWithRemoteNotificationManagementSuggestion=_requestWithRemoteNotificationManagementSuggestion - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * requestWithProvisionalNotificationManagementSuggestion;              //@synthesize requestWithProvisionalNotificationManagementSuggestion=_requestWithProvisionalNotificationManagementSuggestion - In the implementation block
@property (assign,nonatomic) double scoreForRequestWithRemoteNotificationManagementSuggestion;                            //@synthesize scoreForRequestWithRemoteNotificationManagementSuggestion=_scoreForRequestWithRemoteNotificationManagementSuggestion - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationManagementSuggestionManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                                       //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeviceAuthenticated;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(NSMutableDictionary *)notificationManagementSuggestionContentProviders;
-(id)_sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(BOOL)arg2 ;
-(id)init;
-(NCNotificationRequest *)requestWithRemoteNotificationManagementSuggestion;
-(id<NCNotificationManagementSuggestionManagerDelegate>)delegate;
-(NSMutableSet *)sectionIdentifiersWithNotificationManagementSuggestions;
-(NCNotificationRequest *)requestWithProvisionalNotificationManagementSuggestion;
-(double)scoreForRequestWithRemoteNotificationManagementSuggestion;
-(void)setSectionIdentifiersWithNotificationManagementSuggestions:(NSMutableSet *)arg1 ;
-(void)_addSuggestionForNotificationRequest:(id)arg1 managementContentProvider:(id)arg2 ;
-(void)setNotificationManagementSuggestionContentProviders:(NSMutableDictionary *)arg1 ;
-(void)setScoreForRequestWithRemoteNotificationManagementSuggestion:(double)arg1 ;
-(void)setDelegate:(id<NCNotificationManagementSuggestionManagerDelegate>)arg1 ;
-(void)_addRemoteNotificationManagementSuggestionForRequest:(id)arg1 withResponse:(BOOL)arg2 score:(double)arg3 sectionSettings:(id)arg4 isPromotingSuggestion:(BOOL)arg5 ;
-(void)checkNotificationManagementSuggestionNeededForNotificationRequest:(id)arg1 ;
-(void)_createNewQuietingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 ;
-(void)_createNewPromotingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 ;
-(void)_removeSuggestionIfNecessaryForNotificationRequest:(id)arg1 ;
-(void)setRequestWithProvisionalNotificationManagementSuggestion:(NCNotificationRequest *)arg1 ;
-(void)logResponseForNotificationRequest:(id)arg1 allowsNotifications:(BOOL)arg2 ;
-(void)notificationManagementContentProvider:(id)arg1 hasUpdatedContentForRequest:(id)arg2 ;
-(void)_notificationManagementSuggestionResponse:(long long)arg1 forNotificationRequest:(id)arg2 ;
-(void)notificationManagementContentProvider:(id)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(id)arg2 ;
-(void)logResponseForNotificationRequest:(id)arg1 deliveryQuietly:(BOOL)arg2 ;
-(void)_updateContentForNotificationRequest:(id)arg1 ;
-(void)setRequestWithRemoteNotificationManagementSuggestion:(NCNotificationRequest *)arg1 ;
-(void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
@end


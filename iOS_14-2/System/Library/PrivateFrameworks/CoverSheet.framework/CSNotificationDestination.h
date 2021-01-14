/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSNotificationDestination <CSCoverSheetParticipating,SBFNotificationExtensionVisibilityProviding,SBFNotificationLongLookPresenting>
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher; 
@required
-(void)postNotificationRequest:(id)arg1;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id)arg1;
-(void)updateNotificationRequest:(id)arg1;
-(void)withdrawNotificationRequest:(id)arg1;

@end


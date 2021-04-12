/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSNotificationDestination <CSCoverSheetParticipating,SBFNotificationExtensionVisibilityProviding,SBFNotificationLongLookPresenting>
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher; 
@required
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id)arg1;
-(void)postNotificationRequest:(id)arg1;
-(void)updateNotificationRequest:(id)arg1;
-(void)withdrawNotificationRequest:(id)arg1;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end


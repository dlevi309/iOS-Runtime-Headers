/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, RTCReporting, RTCSecureHierarchyToken, NSString;

@interface PKAnalyticsReporter : NSObject {

	NSData* _archivedSessionToken;
	RTCReporting* _session;
	RTCSecureHierarchyToken* _sessionToken;
	os_unfair_lock_s _lockArchive;
	NSString* _subject;

}
+(void)subject:(id)arg1 sendEvent:(id)arg2 ;
+(id)subjectToReportDashboardAnalyticsForPass:(id)arg1 ;
+(id)subjectToReportDashboardAnalyticsForAccount:(id)arg1 ;
+(void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2 ;
+(id)subjectDictionary;
+(id)reporterForSubject:(id)arg1 ;
+(void)beginSubjectReporting:(id)arg1 ;
+(void)endSubjectReporting:(id)arg1 ;
+(void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2 ;
+(void)subjects:(id)arg1 sendEvent:(id)arg2 ;
+(void)sendSingularEvent:(id)arg1 ;
+(id)archivedSessionTokenForSubject:(id)arg1 ;
-(id)initWithSubject:(id)arg1 ;
-(id)initWithArchivedParent:(id)arg1 subject:(id)arg2 ;
-(id)archivedSessionToken;
-(id)initWithParentToken:(id)arg1 subject:(id)arg2 ;
-(id)initWithParent:(id)arg1 subject:(id)arg2 ;
-(void)sendEvent:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/


@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;
@interface NSSNewsAnalyticsEventAnnotator : NSObject {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NSSNewsAnalyticsUserIDProvider> _userIDProvider;

}

@property (nonatomic,__weak,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsUserIDProvider> userIDProvider;                     //@synthesize userIDProvider=_userIDProvider - In the implementation block
-(id)init;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(id)initWithSessionManager:(id)arg1 userIDProvider:(id)arg2 ;
-(void)annotateEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id<NSSNewsAnalyticsUserIDProvider>)userIDProvider;
@end


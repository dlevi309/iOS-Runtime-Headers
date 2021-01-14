/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/


@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;
@interface NSSNewsAnalyticsEventAnnotator : NSObject {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NSSNewsAnalyticsUserIDProvider> _userIDProvider;

}

@property (nonatomic,__weak,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsUserIDProvider> userIDProvider;                     //@synthesize userIDProvider=_userIDProvider - In the implementation block
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(id)init;
-(id<NSSNewsAnalyticsUserIDProvider>)userIDProvider;
-(void)annotateEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)initWithSessionManager:(id)arg1 userIDProvider:(id)arg2 ;
@end


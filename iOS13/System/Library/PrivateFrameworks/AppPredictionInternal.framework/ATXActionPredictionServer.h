/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ATXActionPredictionInterface.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface ATXActionPredictionServer : NSObject <NSXPCListenerDelegate, ATXActionPredictionInterface> {

	NSXPCListener* _listener;
	BOOL _checkEntitlements;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(/*^block*/id)arg7 ;
-(void)sendFeedbackWithResponse:(id)arg1 ;
-(id)initWithListener:(id)arg1 checkEntitlements:(BOOL)arg2 ;
-(id)initAnonymousListener;
@end


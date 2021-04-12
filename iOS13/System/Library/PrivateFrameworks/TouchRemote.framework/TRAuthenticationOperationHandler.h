/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler, NSString;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler> {

	TRCompanionAuthOperationHandler* _companionAuthHandler;
	TRProxyAuthOperationHandler* _proxyAuthHandler;

}

@property (nonatomic,retain) TRCompanionAuthOperationHandler * companionAuthHandler;              //@synthesize companionAuthHandler=_companionAuthHandler - In the implementation block
@property (nonatomic,retain) TRProxyAuthOperationHandler * proxyAuthHandler;                      //@synthesize proxyAuthHandler=_proxyAuthHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(TRProxyAuthOperationHandler *)proxyAuthHandler;
-(void)setProxyAuthHandler:(TRProxyAuthOperationHandler *)arg1 ;
-(TRCompanionAuthOperationHandler *)companionAuthHandler;
-(void)setCompanionAuthHandler:(TRCompanionAuthOperationHandler *)arg1 ;
-(id)initWithCompanionAuthHandler:(/*^block*/id)arg1 proxyAuthHandler:(/*^block*/id)arg2 ;
@end


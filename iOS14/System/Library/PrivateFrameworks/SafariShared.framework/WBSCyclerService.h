/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WBSCyclerServiceProtocol.h>

@protocol WBSCyclerTestSuite;
@class NSXPCListener, WBSCyclerTestTargetProxyController, WBSCyclerTestRunner, NSString;

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol> {

	NSXPCListener* _xpcListener;
	WBSCyclerTestTargetProxyController* _testTargetProxyController;
	Class _testSuiteClass;
	id<WBSCyclerTestSuite> _testSuite;
	WBSCyclerTestRunner* _testRunner;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_postFinishNotificationWithError:(id)arg1 ;
-(void)_setTestSuiteName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setSeed:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)_startCyclingFromBeginning:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startCyclingFromBeginning:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopCyclingWithReply:(/*^block*/id)arg1 ;
-(void)sendRequestToTestSuite:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchStatusWithReply:(/*^block*/id)arg1 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setTestTargetEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


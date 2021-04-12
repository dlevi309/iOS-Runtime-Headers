/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerServiceProtocol.h>

@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id connectionInvalidationHandler; 
@property (nonatomic,copy) id errorHandler;                               //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setTestTargetEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_cyclerProxy;
-(void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startCyclingFromBeginning:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopCyclingWithReply:(/*^block*/id)arg1 ;
-(void)sendRequestToTestSuite:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchStatusWithReply:(/*^block*/id)arg1 ;
-(id)connectionInvalidationHandler;
-(void)setConnectionInvalidationHandler:(id)arg1 ;
@end


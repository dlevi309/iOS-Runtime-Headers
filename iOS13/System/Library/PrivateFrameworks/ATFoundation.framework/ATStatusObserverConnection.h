/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATStatusObserverConnectionProtocol.h>
#import <ATFoundation/ATStatusMonitorObserver.h>

@class NSXPCConnection, NSString;

@interface ATStatusObserverConnection : NSObject <ATStatusObserverConnectionProtocol, ATStatusMonitorObserver> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(id)initWithConnection:(id)arg1 ;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConnection:(id)arg1 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)resume;
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2 ;
@end


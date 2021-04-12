/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSCardItemsControllerRemoteInterface.h>

@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {

	NSString* _identifier;
	NSXPCConnection* _connection;
	BOOL _connected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_noteConnectionDropped;
-(void)setCardItems:(id)arg1 ;
-(void)getCardItemsWithHandler:(/*^block*/id)arg1 ;
@end


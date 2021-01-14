/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCardItems:(id)arg1 ;
-(void)_noteConnectionDropped;
-(void)getCardItemsWithHandler:(/*^block*/id)arg1 ;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end


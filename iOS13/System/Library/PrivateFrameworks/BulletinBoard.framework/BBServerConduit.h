/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBServerConduitClientInterface.h>

@class NSXPCConnection, NSString;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)sharedConduit;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/id)arg2 ;
@end


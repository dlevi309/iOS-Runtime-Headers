/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedConduit;
+(id)clientInterface;
-(id)init;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/id)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end


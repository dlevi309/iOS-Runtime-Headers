/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
*/

#import <libobjc.A.dylib/APRIntentStreamUpdateInterface.h>

@class NSXPCConnection;

@interface APRIntentStreamUpdateClient : NSObject <APRIntentStreamUpdateInterface> {

	NSXPCConnection* _xpcConnection;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)notifyAboutIntentStreamChangeWithReply:(/*^block*/id)arg1 ;
@end


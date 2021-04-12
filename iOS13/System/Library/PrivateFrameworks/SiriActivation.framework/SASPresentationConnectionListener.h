/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, NSString;

@interface SASPresentationConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;

}

@property (nonatomic,retain) BSServiceConnectionListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)listener;
-(id)init;
-(BSServiceConnectionListener *)listener;
-(id)_init;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, NSString;

@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;

}

@property (nonatomic,retain) BSServiceConnectionListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)listener;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)init;
-(BSServiceConnectionListener *)listener;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(id)_init;
@end


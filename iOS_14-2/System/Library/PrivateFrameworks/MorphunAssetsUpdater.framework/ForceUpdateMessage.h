/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MorphunAssetsUpdater.framework/MorphunAssetsUpdater
*/

#import <libobjc.A.dylib/Message.h>

@protocol OS_xpc_object;
@class NSObject;

@interface ForceUpdateMessage : NSObject <Message> {

	NSObject*<OS_xpc_object> message;

}

@property (readonly) NSObject*<OS_xpc_object> message; 
-(NSObject*<OS_xpc_object>)message;
-(int)type;
-(id)init:(id)arg1 removeLanguages:(id)arg2 ;
@end


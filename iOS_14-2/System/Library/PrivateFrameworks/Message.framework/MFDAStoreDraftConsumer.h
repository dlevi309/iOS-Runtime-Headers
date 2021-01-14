/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class NSString, MFError;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _success;
	NSString* _serverId;
	MFError* _error;

}

@property (nonatomic,readonly) NSString * serverId;                 //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,readonly) MFError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL success;                        //@synthesize success=_success - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)success;
-(MFError *)error;
-(NSString *)serverId;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(MFError *)error;
-(BOOL)success;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(NSString *)serverId;
@end


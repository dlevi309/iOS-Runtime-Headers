/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIXPCMessageHandling.h>

@class TRIXPCService, NSString;

@interface TRIControlManager : NSObject <TRIXPCMessageHandling> {

	TRIXPCService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(id)init;
-(void)start;
-(id)handleMessage:(id)arg1 error:(id*)arg2 ;
@end


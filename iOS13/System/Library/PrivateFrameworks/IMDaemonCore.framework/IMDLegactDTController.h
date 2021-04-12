/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IMDLegactDTController : NSObject <IDSServiceDelegate> {

	IDSService* _dtService;

}

@property (nonatomic,retain) IDSService * dtService;                //@synthesize dtService=_dtService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)_senderIDFromToken:(id)arg1 ;
-(IDSService *)dtService;
-(void)setDtService:(IDSService *)arg1 ;
@end


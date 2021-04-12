/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)dealloc;
-(id)_senderIDFromToken:(id)arg1 ;
-(IDSService *)dtService;
-(void)setDtService:(IDSService *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSServiceFacilityClientHandle_Internal.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol FBSServiceFacilityClientContext;
@class NSString, BSServiceConnection, FBProcess, BSProcessHandle, RBSProcessIdentity;

@interface FBServiceFacilityServerClientHandle : NSObject <FBSServiceFacilityClientHandle_Internal, BSInvalidatable> {

	NSString* _facilityID;
	BSServiceConnection* _connection;
	FBProcess* _process;
	BSProcessHandle* _processHandle;
	id<FBSServiceFacilityClientContext> _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) BSProcessHandle * processHandle;                                              //@synthesize processHandle=_processHandle - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSString * facilityID;                                                   //@synthesize facilityID=_facilityID - In the implementation block
@property (nonatomic,retain) id<FBSServiceFacilityClientContext> context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<BSXPCServiceConnectionMessaging> clientHandle_messageBuilder; 
-(NSString *)description;
-(void)invalidate;
-(BOOL)isSuspended;
-(id<FBSServiceFacilityClientContext>)context;
-(BSProcessHandle *)processHandle;
-(void)setContext:(id<FBSServiceFacilityClientContext>)arg1 ;
-(int)pid;
-(RBSProcessIdentity *)processIdentity;
-(id)prettyProcessDescription;
-(NSString *)facilityID;
-(id<BSXPCServiceConnectionMessaging>)clientHandle_messageBuilder;
-(id)initWithFacilityID:(id)arg1 connection:(id)arg2 ;
@end


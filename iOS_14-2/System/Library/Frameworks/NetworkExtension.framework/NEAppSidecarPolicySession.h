/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject {

	NEPolicySession* _policySession;
	NSMutableArray* _policyIDList;

}

@property (retain) NEPolicySession * policySession;              //@synthesize policySession=_policySession - In the implementation block
@property (retain) NSMutableArray * policyIDList;                //@synthesize policyIDList=_policyIDList - In the implementation block
+(id)connectionIdentifier;
-(id)init;
-(NSMutableArray *)policyIDList;
-(BOOL)installPolicies;
-(BOOL)uninstallPolicies;
-(void)setPolicyIDList:(NSMutableArray *)arg1 ;
-(void)setPolicySession:(NEPolicySession *)arg1 ;
-(NEPolicySession *)policySession;
@end


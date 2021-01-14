/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSSet, CKServerChangeToken, HMBMirrorInput, NSString;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging> {

	NSSet* _interestedRecordIDs;
	CKServerChangeToken* _changeToken;
	CKServerChangeToken* _originalChangeToken;
	HMBMirrorInput* _mirrorInput;

}

@property (nonatomic,readonly) NSSet * interestedRecordIDs;                            //@synthesize interestedRecordIDs=_interestedRecordIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * changeToken;                        //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * originalChangeToken;              //@synthesize originalChangeToken=_originalChangeToken - In the implementation block
@property (nonatomic,retain) HMBMirrorInput * mirrorInput;                             //@synthesize mirrorInput=_mirrorInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finishWithError:(id)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(HMBMirrorInput *)mirrorInput;
-(id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7 ;
-(NSSet *)interestedRecordIDs;
-(CKServerChangeToken *)originalChangeToken;
-(void)setMirrorInput:(HMBMirrorInput *)arg1 ;
@end


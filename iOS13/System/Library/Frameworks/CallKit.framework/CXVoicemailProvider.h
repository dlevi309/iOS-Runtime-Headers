/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXAbstractProvider.h>
#import <libobjc.A.dylib/CXVoicemailProviderVendorProtocol.h>

@class NSString;

@interface CXVoicemailProvider : CXAbstractProvider <CXVoicemailProviderVendorProtocol>

@property (assign,nonatomic,__weak) id<CXVoicemailProviderDelegate> delegate; 
@property (nonatomic,readonly) id<CXVoicemailProviderHostProtocol> hostProtocolDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_performAction:(id)arg1 ;
-(void)reportNewVoicemailsWithUpdates:(id)arg1 ;
-(void)reportVoicemailsUpdated:(id)arg1 ;
-(void)reportVoicemailsRemovedWithUUIDs:(id)arg1 ;
-(id)pendingVoicemailActionsOfClass:(Class)arg1 withVoicemailUUID:(id)arg2 ;
-(void)reportNewVoicemailWithUpdate:(id)arg1 ;
-(void)reportVoicemailUpdated:(id)arg1 ;
-(void)reportVoicemailRemovedWithUUID:(id)arg1 ;
@end


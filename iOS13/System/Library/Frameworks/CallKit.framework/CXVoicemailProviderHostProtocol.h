/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXVoicemailProviderHostProtocol <CXAbstractProviderHostProtocol>
@required
-(oneway void)reportNewVoicemailsWithUpdates:(id)arg1;
-(oneway void)reportVoicemailsUpdated:(id)arg1;
-(oneway void)reportVoicemailsRemovedWithUUIDs:(id)arg1;

@end


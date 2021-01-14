/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NENexusAgentDelegate <NSObject>
@required
-(BOOL)handleRequestNexusFromClient:(id)arg1;
-(void)closeFlowWithClientIdentifier:(id)arg1;
-(void)handleStartFromClient:(id)arg1;
-(void)handleAssertFromClient:(id)arg1;
-(void)handleUnassertFromClient:(id)arg1;

@end


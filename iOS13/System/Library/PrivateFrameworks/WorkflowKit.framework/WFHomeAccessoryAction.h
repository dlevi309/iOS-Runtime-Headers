/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@class HFTriggerActionSetsBuilder, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (nonatomic,readonly) HFTriggerActionSetsBuilder * triggerActionSetsBuilder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1 ;
+(id)homeAccessoryActionWithHome:(id)arg1 ;
-(void)dealloc;
-(id)localizedName;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)homeName;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedDescriptionSummary;
-(id)localizedAttribution;
-(HFTriggerActionSetsBuilder *)triggerActionSetsBuilder;
@end


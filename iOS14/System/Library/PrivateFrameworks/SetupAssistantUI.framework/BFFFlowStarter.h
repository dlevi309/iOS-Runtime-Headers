/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFFlowDiverter;
@interface BFFFlowStarter : NSObject {

	id<BFFFlowDiverter> _diverter;

}

@property (nonatomic,retain) id<BFFFlowDiverter> diverter;              //@synthesize diverter=_diverter - In the implementation block
-(id<BFFFlowDiverter>)diverter;
-(id)initWithFlowDiverter:(id)arg1 ;
-(BOOL)controllerNeedsToRunForClass:(Class)arg1 ;
-(void)setDiverter:(id<BFFFlowDiverter>)arg1 ;
@end


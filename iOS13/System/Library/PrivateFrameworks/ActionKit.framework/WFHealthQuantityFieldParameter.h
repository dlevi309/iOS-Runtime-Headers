/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, HKQuantityType, WFAction, NSString;

@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {

	NSArray* _possibleUnits;
	HKQuantityType* _quantityType;
	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(BOOL)isHidden;
-(HKQuantityType *)quantityType;
-(void)setAction:(WFAction *)arg1 ;
-(id)localizedLabel;
-(void)attributesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(void)updatePossibleUnits;
@end


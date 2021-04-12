/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isHidden;
-(id)localizedLabel;
-(HKQuantityType *)quantityType;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)attributesDidChange;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(void)updatePossibleUnits;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, NSString;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isHidden;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(id)currentUnitType;
@end


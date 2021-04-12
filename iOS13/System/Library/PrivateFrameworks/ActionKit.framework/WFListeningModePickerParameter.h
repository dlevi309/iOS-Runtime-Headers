/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class WFAction, NSString;

@interface WFListeningModePickerParameter : WFDynamicEnumerationParameter <WFActionEventObserver, WFDynamicEnumerationDataSource> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(id)initWithDefinition:(id)arg1 ;
-(void)setAction:(WFAction *)arg1 ;
-(Class)singleStateClass;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
@end


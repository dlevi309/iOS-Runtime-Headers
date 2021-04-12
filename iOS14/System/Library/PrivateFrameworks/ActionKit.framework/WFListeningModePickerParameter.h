/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAction:(WFAction *)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
@end


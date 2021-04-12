/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, NSString;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * parameterKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mustBeAvailableForDisplay;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)refreshAvailability;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3 ;
-(id)comparedValues;
-(NSString *)parameterKey;
-(void)setupWithAction:(id)arg1 ;
@end


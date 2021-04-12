/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSUnit, NSString;

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement {

	NSUnit* _unit;

}

@property (nonatomic,readonly) NSString * unitType; 
@property (nonatomic,readonly) NSUnit * unit;                    //@synthesize unit=_unit - In the implementation block
-(NSUnit *)unit;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)unitType;
-(id)initWithUnit:(id)arg1 unitType:(id)arg2 ;
-(id)availableUnits;
@end


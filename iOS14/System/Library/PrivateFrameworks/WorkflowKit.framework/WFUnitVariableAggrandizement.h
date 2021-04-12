/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSUnit, NSString;

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement {

	NSUnit* _unit;

}

@property (nonatomic,readonly) NSString * unitType; 
@property (nonatomic,readonly) NSUnit * unit;                    //@synthesize unit=_unit - In the implementation block
-(NSString *)unitType;
-(NSUnit *)unit;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithUnit:(id)arg1 unitType:(id)arg2 ;
-(id)availableUnits;
@end


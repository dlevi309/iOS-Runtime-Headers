/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAccessoryStateActionWithHome:(id)arg1 ;
-(void)dealloc;
-(id)localizedName;
-(id)home;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)characteristic;
-(id)homeName;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedDescriptionSummary;
-(id)localizedAttribution;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)outputMeasurementUnitType;
-(id)localizedDefaultOutputName;
-(void)updateCharacteristicsEnumeration;
@end


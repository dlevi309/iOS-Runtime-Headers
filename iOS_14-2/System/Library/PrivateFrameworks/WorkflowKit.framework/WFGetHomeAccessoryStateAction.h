/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)localizedName;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)homeName;
-(id)characteristic;
-(void)dealloc;
-(id)home;
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


/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFNumberFieldParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSArray, NSString;

@interface WFQuantityFieldParameter : WFNumberFieldParameter <WFModuleSummarySupporting> {

	NSArray* _possibleUnits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * possibleUnits;                 //@synthesize possibleUnits=_possibleUnits - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(id)defaultUnit;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)defaultSerializedRepresentation;
-(void)setPossibleUnits:(NSArray *)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(NSArray *)possibleUnits;
@end


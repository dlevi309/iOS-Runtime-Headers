/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFDynamicEnumerationDataSource <NSObject>
@optional
-(id)possibleStatesForEnumeration:(id)arg1;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)enumerationAllowsMultipleValues:(id)arg1;
-(id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;

@required
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end


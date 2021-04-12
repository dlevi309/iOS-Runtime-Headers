/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFDynamicEnumerationDataSource <NSObject>
@optional
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)possibleStatesForEnumeration:(id)arg1;
-(id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1;
-(BOOL)enumerationAllowsMultipleValues:(id)arg1;

@required
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end


/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable>
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
@optional
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(id)cachedErrorForExecutionOfActionSet:(id)arg1;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1;

@required
-(id)readValuesForCharacteristics:(id)arg1;
-(id)writeValuesForCharacteristics:(id)arg1;
-(id)cachedValueForCharacteristic:(id)arg1;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;

@end


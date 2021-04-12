/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@protocol WFDynamicEnumerationDataSource;
@class NSArray, NSError;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	id _defaultSerializedRepresentation;
	id<WFDynamicEnumerationDataSource> _dataSource;
	unsigned long long _possibleStatesLoadingState;
	unsigned long long _defaultValueLoadingState;
	NSError* _possibleStatesLoadingError;

}

@property (assign,nonatomic) unsigned long long possibleStatesLoadingState;                     //@synthesize possibleStatesLoadingState=_possibleStatesLoadingState - In the implementation block
@property (assign,nonatomic) unsigned long long defaultValueLoadingState;                       //@synthesize defaultValueLoadingState=_defaultValueLoadingState - In the implementation block
@property (nonatomic,retain) NSError * possibleStatesLoadingError;                              //@synthesize possibleStatesLoadingError=_possibleStatesLoadingError - In the implementation block
@property (nonatomic,retain) NSArray * possibleStates;                                          //@synthesize possibleStates=_possibleStates - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicEnumerationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(BOOL)isAsynchronous;
-(id<WFDynamicEnumerationDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicEnumerationDataSource>)arg1 ;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(BOOL)alwaysShowsButton;
-(BOOL)allowsMultipleValues;
-(void)defaultSerializedRepresentationDidChange;
-(id)defaultSerializedRepresentation;
-(void)clearPossibleStates;
-(void)setPossibleStates:(NSArray *)arg1 ;
-(void)loadPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)possibleStatesLoadingState;
-(void)setPossibleStatesLoadingState:(unsigned long long)arg1 ;
-(unsigned long long)defaultValueLoadingState;
-(void)setDefaultValueLoadingState:(unsigned long long)arg1 ;
-(NSError *)possibleStatesLoadingError;
-(void)setPossibleStatesLoadingError:(NSError *)arg1 ;
@end


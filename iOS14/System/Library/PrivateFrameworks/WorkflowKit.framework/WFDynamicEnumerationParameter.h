/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@protocol WFDynamicEnumerationDataSource;
@class NSArray, INObjectCollection, NSError;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INObjectCollection* _possibleStatesCollection;
	id _defaultSerializedRepresentation;
	id<WFDynamicEnumerationDataSource> _dataSource;
	unsigned long long _defaultValueLoadingState;
	unsigned long long _possibleStatesLoadingState;
	NSError* _possibleStatesLoadingError;

}

@property (assign,nonatomic) unsigned long long defaultValueLoadingState;                       //@synthesize defaultValueLoadingState=_defaultValueLoadingState - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;                                        //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) INObjectCollection * possibleStatesCollection;                     //@synthesize possibleStatesCollection=_possibleStatesCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long possibleStatesLoadingState;                   //@synthesize possibleStatesLoadingState=_possibleStatesLoadingState - In the implementation block
@property (nonatomic,readonly) NSError * possibleStatesLoadingError;                            //@synthesize possibleStatesLoadingError=_possibleStatesLoadingError - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicEnumerationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)wf_shouldValidateCurrentStateOnCollectionChanged;
-(BOOL)isAsynchronous;
-(id<WFDynamicEnumerationDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicEnumerationDataSource>)arg1 ;
-(NSArray *)possibleStates;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPossibleStatesFromRemoteSource:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(BOOL)alwaysShowsButton;
-(void)defaultSerializedRepresentationDidChange;
-(id)defaultSerializedRepresentation;
-(BOOL)allowsMultipleValues;
-(void)clearPossibleStates;
-(void)reloadPossibleStates;
-(void)setPossibleStates:(NSArray *)arg1 ;
-(void)setPossibleStatesCollection:(INObjectCollection *)arg1 ;
-(void)loadPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(INObjectCollection *)possibleStatesCollection;
-(unsigned long long)defaultValueLoadingState;
-(void)setDefaultValueLoadingState:(unsigned long long)arg1 ;
-(unsigned long long)possibleStatesLoadingState;
-(NSError *)possibleStatesLoadingError;
@end


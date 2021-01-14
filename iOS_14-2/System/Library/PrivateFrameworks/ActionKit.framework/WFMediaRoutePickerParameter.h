/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, NSString;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _routePicker;

}

@property (nonatomic,retain) WFMediaRoutePicker * routePicker;              //@synthesize routePicker=_routePicker - In the implementation block
@property (nonatomic,readonly) long long routeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wf_alwaysScaleIconImage;
-(long long)routeType;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)preferParameterValuePicker;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)startLiveUpdatingPossibleStates;
-(void)stopLiveUpdatingPossibleStates;
-(BOOL)liveUpdatesPossibleStatesInEditor;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(WFMediaRoutePicker *)routePicker;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;
-(BOOL)shouldDefaultToLocalDeviceEndpoint;
-(id)sortedStatesForAvailableRoutes:(id)arg1 ;
-(void)setRoutePicker:(WFMediaRoutePicker *)arg1 ;
@end


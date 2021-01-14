/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {

	BOOL _allowsAllCalendars;
	id _defaultSerializedCalendarRepresentation;
	NSArray* _calendarStates;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (nonatomic,retain) id defaultSerializedCalendarRepresentation;              //@synthesize defaultSerializedCalendarRepresentation=_defaultSerializedCalendarRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * calendarStates;                                //@synthesize calendarStates=_calendarStates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) BOOL allowsAllCalendars;                               //@synthesize allowsAllCalendars=_allowsAllCalendars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)clearPossibleStates;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)allowsAllCalendars;
-(id)defaultSerializedCalendarRepresentation;
-(void)setDefaultSerializedCalendarRepresentation:(id)arg1 ;
-(NSArray *)calendarStates;
-(void)setCalendarStates:(NSArray *)arg1 ;
@end


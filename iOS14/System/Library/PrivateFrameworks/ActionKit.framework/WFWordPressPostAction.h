/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFDynamicTagFieldDataSource.h>

@class NSString;

@interface WFWordPressPostAction : WFAction <WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource> {

	id _observer;

}

@property (nonatomic,retain) id observer;                           //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)suggestedTagsForTagField:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)updatePossibleStates;
-(void)generateHTMLFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccountMetadata;
-(void)updateHiddenStates;
@end


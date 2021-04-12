/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {

	NSArray* _possibleStates;
	NSOrderedSet* _supportedAppIdentifiers;

}

@property (nonatomic,readonly) NSOrderedSet * supportedAppIdentifiers;              //@synthesize supportedAppIdentifiers=_supportedAppIdentifiers - In the implementation block
-(id)possibleStates;
-(void)dealloc;
-(void)addObservers;
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStatesForLocalization;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(NSOrderedSet *)supportedAppIdentifiers;
-(void)refreshInstalledApps;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(void)removeObservers;
@end


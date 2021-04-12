/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(id)possibleStatesForLocalization;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(NSOrderedSet *)supportedAppIdentifiers;
-(void)refreshInstalledApps;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(void)removeObservers;
-(void)addObservers;
@end


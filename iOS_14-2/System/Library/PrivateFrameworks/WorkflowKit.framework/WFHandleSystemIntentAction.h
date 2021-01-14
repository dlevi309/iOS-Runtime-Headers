/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFHandleIntentAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class INIntentDescription, NSArray, NSString;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {

	int _token;
	INIntentDescription* _intentDescription;
	NSArray* _supportedAppIdentifiers;
	NSArray* _supportedIdentifiers;

}

@property (nonatomic,readonly) int token;                                   //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSArray * supportedIdentifiers;              //@synthesize supportedIdentifiers=_supportedIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)intentCategory;
-(id)intentDescription;
-(id)appIdentifier;
-(id)slots;
-(int)token;
-(id)localizedAppName;
-(void)dealloc;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(BOOL)requiresRemoteExecution;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)actionForAppIdentifier:(id)arg1 ;
-(id)supportedAppIdentifiers;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)displayableAppIdentifierForBundleIdentifier:(id)arg1 ;
-(id)localizedDisplayableAppNameForBundleIdentifier:(id)arg1 ;
-(NSArray *)supportedIdentifiers;
-(void)selectedAppDidChange;
-(id)appSection;
-(id)selectedAppNotSupportedError;
@end


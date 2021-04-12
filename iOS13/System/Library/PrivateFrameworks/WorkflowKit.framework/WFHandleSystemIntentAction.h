/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)token;
-(id)appIdentifier;
-(long long)intentCategory;
-(id)intentDescription;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(id)slots;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)actionForAppIdentifier:(id)arg1 ;
-(id)supportedAppIdentifiers;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)appIdentifierForIdentifier:(id)arg1 ;
-(NSArray *)supportedIdentifiers;
-(void)selectedAppDidChange;
-(id)appSection;
-(id)selectedHandlerBundleIdentifier;
@end


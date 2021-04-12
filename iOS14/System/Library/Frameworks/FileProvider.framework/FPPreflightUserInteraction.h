/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class FPPreflightUserInteractionAlert, NSString, NSArray, NSPredicate;

@interface FPPreflightUserInteraction : NSObject {

	FPPreflightUserInteractionAlert* _alert;
	NSString* _providerIdentifier;
	NSArray* _subInteractions;
	NSPredicate* _predicate;

}

@property (nonatomic,retain) FPPreflightUserInteractionAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain) NSString * providerIdentifier;                        //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * subInteractions;                            //@synthesize subInteractions=_subInteractions - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                              //@synthesize predicate=_predicate - In the implementation block
+(id)userInteractionErrorsInInfoPlistDict:(id)arg1 forAction:(id)arg2 bundleID:(id)arg3 hierarchyServicer:(id)arg4 sourceItems:(id)arg5 destinationItem:(id)arg6 localizationLookup:(id)arg7 ;
+(id)interactionFromDictionary:(id)arg1 localizationLookup:(id)arg2 providerIdentifier:(id)arg3 ;
+(id)_retrieveFPItemHierarchyLookupForItem:(id)arg1 itemsHierarchyCache:(id)arg2 hierarchyServicer:(id)arg3 ;
+(void)_setupEvaluationObjectsByName:(id)arg1 hierarchyServicer:(id)arg2 ;
+(id)evaluationObjectsForAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 hierarchyServicer:(id)arg4 ;
+(id)userInteractionErrorsInInfoPlistInteractions:(id)arg1 evaluationObjectsByName:(id)arg2 localizationLookup:(id)arg3 providerIdentifier:(id)arg4 ;
+(id)userInteractionItemsForDestinationItem:(id)arg1 ;
+(id)userInteractionErrorsInInfoPlistDict:(id)arg1 forAction:(id)arg2 bundleID:(id)arg3 hierarchyServicer:(id)arg4 sourceNSFPItems:(id)arg5 destinationNSFPItem:(id)arg6 localizationLookup:(id)arg7 provider:(id)arg8 domain:(id)arg9 extensionCapabilities:(unsigned long long)arg10 useFPFS:(BOOL)arg11 ;
+(id)userInteractionErrorsForAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 hierarchyServicer:(id)arg4 ;
-(NSString *)providerIdentifier;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setSubInteractions:(NSArray *)arg1 ;
-(NSArray *)subInteractions;
-(id)_evaluateWithObjectsByName:(id)arg1 sourceItems:(id)arg2 sourceItemsLookups:(id)arg3 errorIndex:(unsigned long long*)arg4 ;
-(BOOL)_shouldSetupDestinationItemHierarchyLookup;
-(BOOL)_shouldSetupSourceItemHierarchyLookup;
-(id)evaluateWithObjectsByName:(id)arg1 ;
-(void)setAlert:(FPPreflightUserInteractionAlert *)arg1 ;
-(FPPreflightUserInteractionAlert *)alert;
@end


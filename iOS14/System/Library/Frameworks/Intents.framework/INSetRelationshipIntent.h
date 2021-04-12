/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetRelationshipIntentExport.h>

@class NSArray, INModifyRelationship, NSString;

@interface INSetRelationshipIntent : INIntent <INSetRelationshipIntentExport>

@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,copy,readonly) INModifyRelationship * targetRelationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)initWithContactIdentifiers:(id)arg1 targetRelationship:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INModifyRelationship *)targetRelationship;
-(void)setTargetRelationship:(INModifyRelationship *)arg1 ;
-(NSArray *)contactIdentifiers;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
@end


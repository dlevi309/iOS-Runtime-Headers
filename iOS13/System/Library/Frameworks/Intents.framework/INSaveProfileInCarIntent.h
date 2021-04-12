/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveProfileInCarIntentExport.h>

@class NSNumber, NSString;

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (nonatomic,copy,readonly) NSString * profileLabel; 
@property (nonatomic,copy,readonly) NSNumber * profileNumber; 
@property (nonatomic,copy,readonly) NSString * profileName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(NSNumber *)arg1 ;
-(NSString *)profileName;
-(void)setProfileName:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 ;
-(NSString *)profileLabel;
-(id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 ;
@end


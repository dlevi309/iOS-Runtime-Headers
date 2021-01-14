/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INShowHomeIntentExport.h>

@class NSArray, INDateComponentsRange, NSString;

@interface INShowHomeIntent : INIntent <INShowHomeIntentExport>

@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) INDateComponentsRange * time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(INDateComponentsRange *)time;
-(void)_setMetadata:(id)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(id)initWithFilters:(id)arg1 time:(id)arg2 ;
-(id)_metadata;
-(NSArray *)filters;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end


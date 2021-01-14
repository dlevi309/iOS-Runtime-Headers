/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INListShortcutsIntentExport.h>

@class NSArray, NSString;

@interface INListShortcutsIntent : INIntent <INListShortcutsIntentExport>

@property (nonatomic,readonly) long long originDevice; 
@property (nonatomic,copy,readonly) NSArray * appTitles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setAppTitles:(NSArray *)arg1 ;
-(id)initWithOriginDevice:(long long)arg1 appTitles:(id)arg2 ;
-(long long)originDevice;
-(void)setOriginDevice:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)appTitles;
@end


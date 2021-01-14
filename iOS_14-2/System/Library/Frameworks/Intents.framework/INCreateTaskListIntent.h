/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INCreateTaskListIntentExport.h>

@class INSpeakableString, NSArray, NSString;

@interface INCreateTaskListIntent : INIntent <INCreateTaskListIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * title; 
@property (nonatomic,copy,readonly) NSArray * taskTitles; 
@property (nonatomic,copy,readonly) INSpeakableString * groupName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(INSpeakableString *)groupName;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 taskTitles:(id)arg2 groupName:(id)arg3 ;
-(void)setTitle:(INSpeakableString *)arg1 ;
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
-(NSArray *)taskTitles;
-(INSpeakableString *)title;
@end


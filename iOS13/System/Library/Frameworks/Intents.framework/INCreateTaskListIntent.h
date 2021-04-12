/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(id)_metadata;
-(INSpeakableString *)title;
-(void)setTitle:(INSpeakableString *)arg1 ;
-(INSpeakableString *)groupName;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 taskTitles:(id)arg2 groupName:(id)arg3 ;
@end


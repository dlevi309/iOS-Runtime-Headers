/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForNotebookItemsIntentExport.h>

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * title; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,readonly) long long itemType; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) CLPlacemark * location; 
@property (nonatomic,readonly) long long locationSearchType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTime; 
@property (nonatomic,readonly) long long dateSearchType; 
@property (nonatomic,readonly) unsigned long long temporalEventTriggerTypes; 
@property (nonatomic,readonly) long long taskPriority; 
@property (nonatomic,copy,readonly) NSString * notebookItemIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
-(id)domain;
-(long long)status;
-(id)_metadata;
-(INSpeakableString *)title;
-(void)setTitle:(INSpeakableString *)arg1 ;
-(CLPlacemark *)location;
-(INSpeakableString *)groupName;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setLocation:(CLPlacemark *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(long long)itemType;
-(void)setItemType:(long long)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)dateTime;
-(void)setDateTime:(INDateComponentsRange *)arg1 ;
-(long long)locationSearchType;
-(void)setLocationSearchType:(long long)arg1 ;
-(long long)dateSearchType;
-(void)setDateSearchType:(long long)arg1 ;
-(unsigned long long)temporalEventTriggerTypes;
-(void)setTemporalEventTriggerTypes:(unsigned long long)arg1 ;
-(long long)taskPriority;
-(void)setTaskPriority:(long long)arg1 ;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1 ;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9 ;
@end


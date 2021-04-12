/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INControlHomeIntentExport.h>

@class INHomeUserTask, NSArray, INDateComponentsRange, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic,copy,readonly) INHomeUserTask * userTask; 
@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) INDateComponentsRange * time; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)contents;
-(id)verb;
-(INDateComponentsRange *)time;
-(void)_setMetadata:(id)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(id)_metadata;
-(NSArray *)filters;
-(BOOL)_hasTitle;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(INHomeUserTask *)arg1 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setContents:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithContents:(id)arg1 ;
@end


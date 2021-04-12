/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAppendToNoteIntentExport.h>

@class INNote, INNoteContent, NSString;

@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (nonatomic,copy,readonly) INNote * targetNote; 
@property (nonatomic,copy,readonly) INNoteContent * content; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(INNoteContent *)content;
-(id)_metadata;
-(void)setContent:(INNoteContent *)arg1 ;
-(id)_dictionaryRepresentation;
-(INNote *)targetNote;
-(void)setTargetNote:(INNote *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTargetNote:(id)arg1 content:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INReadAnnouncementIntentExport.h>

@class NSString;

@interface INReadAnnouncementIntent : INIntent <INReadAnnouncementIntentExport>

@property (nonatomic,readonly) long long readType; 
@property (nonatomic,copy,readonly) NSString * startAnnouncementIdentifier; 
@property (nonatomic,readonly) long long userNotificationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(long long)readType;
-(id)_dictionaryRepresentation;
-(void)setUserNotificationType:(long long)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setReadType:(long long)arg1 ;
-(NSString *)startAnnouncementIdentifier;
-(long long)userNotificationType;
-(void)setStartAnnouncementIdentifier:(NSString *)arg1 ;
-(id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end


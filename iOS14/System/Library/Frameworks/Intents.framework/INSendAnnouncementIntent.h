/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendAnnouncementIntentExport.h>

@class INAnnouncement, NSArray, NSNumber, NSString;

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (nonatomic,copy,readonly) INAnnouncement * announcement; 
@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,copy,readonly) NSNumber * isReply; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipients;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setRecipients:(NSArray *)arg1 ;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(INAnnouncement *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithAnnouncement:(id)arg1 recipients:(id)arg2 isReply:(id)arg3 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)_preferredInteractionDirection;
-(NSNumber *)isReply;
-(void)setIsReply:(NSNumber *)arg1 ;
@end


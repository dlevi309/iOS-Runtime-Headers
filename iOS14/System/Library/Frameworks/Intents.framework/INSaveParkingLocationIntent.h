/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveParkingLocationIntentExport.h>

@class CLPlacemark, NSString;

@interface INSaveParkingLocationIntent : INIntent <INSaveParkingLocationIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * parkingLocation; 
@property (nonatomic,copy,readonly) NSString * parkingNote; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(CLPlacemark *)arg1 ;
-(NSString *)parkingNote;
-(void)setParkingNote:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(id)initWithParkingLocation:(id)arg1 parkingNote:(id)arg2 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end


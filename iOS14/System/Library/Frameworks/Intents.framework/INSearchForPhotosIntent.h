/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForPhotosIntentExport.h>

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>

@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) CLPlacemark * locationCreated; 
@property (nonatomic,copy,readonly) NSString * albumName; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long includedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributes; 
@property (nonatomic,copy,readonly) NSArray * peopleInPhoto; 
@property (nonatomic,readonly) long long peopleInPhotoOperator; 
@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,readonly) long long eventsOperator; 
@property (nonatomic,copy) NSArray * places; 
@property (nonatomic,readonly) long long placesOperator; 
@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,readonly) long long activitiesOperator; 
@property (nonatomic,copy) NSArray * geographicalFeatures; 
@property (nonatomic,readonly) long long geographicalFeaturesOperator; 
@property (nonatomic,copy) NSString * memoryName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)activities;
-(id)verb;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(NSString *)albumName;
-(id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7 ;
-(void)setActivities:(NSArray *)arg1 ;
-(id)_metadata;
-(NSArray *)places;
-(INDateComponentsRange *)dateCreated;
-(void)setEvents:(NSArray *)arg1 ;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(CLPlacemark *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(long long)eventsOperator;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(id)domain;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1 ;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1 ;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(NSArray *)arg1 ;
-(long long)searchTermsOperator;
-(long long)peopleInPhotoOperator;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(NSArray *)arg1 ;
-(NSString *)memoryName;
-(void)setMemoryName:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)events;
-(void)setPlaces:(NSArray *)arg1 ;
@end


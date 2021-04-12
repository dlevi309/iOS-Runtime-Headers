/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,readonly) long long eventsOperator; 
@property (nonatomic,copy) NSArray * places; 
@property (nonatomic,readonly) long long placesOperator; 
@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,readonly) long long activitiesOperator; 
@property (nonatomic,copy) NSArray * geographicalFeatures; 
@property (nonatomic,readonly) long long geographicalFeaturesOperator; 
@property (nonatomic,copy) NSString * memoryName; 
-(id)domain;
-(id)_metadata;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(NSArray *)activities;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)places;
-(void)setPlaces:(NSArray *)arg1 ;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(CLPlacemark *)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1 ;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1 ;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(NSArray *)arg1 ;
-(id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7 ;
-(long long)searchTermsOperator;
-(long long)peopleInPhotoOperator;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(NSArray *)arg1 ;
-(NSString *)memoryName;
-(void)setMemoryName:(NSString *)arg1 ;
-(long long)eventsOperator;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;
@end


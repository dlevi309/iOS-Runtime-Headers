/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INSearchForPhotosIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) CLPlacemark * locationCreated; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long includedAttributes; 
@property (assign,nonatomic) unsigned long long excludedAttributes; 
@property (nonatomic,copy) NSArray * peopleInPhoto; 
@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,readonly) long long eventsOperator; 
@property (nonatomic,copy) NSArray * places; 
@property (nonatomic,readonly) long long placesOperator; 
@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,readonly) long long activitiesOperator; 
@property (nonatomic,copy) NSArray * geographicalFeatures; 
@property (nonatomic,readonly) long long geographicalFeaturesOperator; 
@property (nonatomic,copy) NSString * memoryName; 
@required
-(NSArray *)activities;
-(void)setAlbumName:(id)arg1;
-(NSString *)albumName;
-(void)setActivities:(id)arg1;
-(id)init;
-(NSArray *)places;
-(INDateComponentsRange *)dateCreated;
-(void)setEvents:(id)arg1;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(long long)eventsOperator;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;
-(void)setDateCreated:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(id)arg1;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(id)arg1;
-(NSString *)memoryName;
-(void)setMemoryName:(id)arg1;
-(NSArray *)events;
-(void)setPlaces:(id)arg1;

@end


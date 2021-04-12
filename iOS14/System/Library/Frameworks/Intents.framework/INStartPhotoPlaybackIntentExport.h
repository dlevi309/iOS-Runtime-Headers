/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INStartPhotoPlaybackIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) CLPlacemark * locationCreated; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long includedAttributes; 
@property (assign,nonatomic) unsigned long long excludedAttributes; 
@property (nonatomic,copy) NSArray * peopleInPhoto; 
@required
-(void)setAlbumName:(id)arg1;
-(NSString *)albumName;
-(id)init;
-(INDateComponentsRange *)dateCreated;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(void)setDateCreated:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(id)arg1;

@end


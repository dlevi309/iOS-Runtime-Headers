/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SALocation, NSURL, NSArray, NSString, NSDate, NSDictionary, SALocalSearchOperationHours, NSData;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * currencySymbol; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSDictionary * identifierMap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * offerLists; 
@property (nonatomic,retain) SALocalSearchOperationHours * operationHours; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSArray * photoList; 
@property (nonatomic,copy) NSData * placeData2; 
@property (nonatomic,copy) NSString * priceRange; 
@property (nonatomic,copy) NSArray * reviewList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)business2;
+(id)business2WithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)currencySymbol;
-(void)setCategories:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)categories;
-(NSString *)phoneNumber;
-(NSString *)priceRange;
-(NSArray *)commands;
-(NSString *)name;
-(void)setIdentifierMap:(NSDictionary *)arg1 ;
-(NSDictionary *)identifierMap;
-(void)setCommands:(NSArray *)arg1 ;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSData *)placeData2;
-(void)setPlaceData2:(NSData *)arg1 ;
-(NSArray *)reviewList;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)offerLists;
-(void)setOfferLists:(NSArray *)arg1 ;
-(SALocalSearchOperationHours *)operationHours;
-(void)setOperationHours:(SALocalSearchOperationHours *)arg1 ;
-(NSArray *)photoList;
-(void)setPhotoList:(NSArray *)arg1 ;
-(void)setReviewList:(NSArray *)arg1 ;
-(void)setPriceRange:(NSString *)arg1 ;
@end


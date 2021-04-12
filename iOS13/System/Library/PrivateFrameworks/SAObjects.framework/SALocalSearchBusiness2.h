/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)currencySymbol;
-(SALocation *)address;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setAddress:(SALocation *)arg1 ;
-(NSString *)priceRange;
-(void)setPriceRange:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSDictionary *)identifierMap;
-(id)encodedClassName;
-(void)setIdentifierMap:(NSDictionary *)arg1 ;
-(void)setReviewList:(NSArray *)arg1 ;
-(NSArray *)reviewList;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSData *)placeData2;
-(void)setPlaceData2:(NSData *)arg1 ;
-(NSArray *)offerLists;
-(void)setOfferLists:(NSArray *)arg1 ;
-(SALocalSearchOperationHours *)operationHours;
-(void)setOperationHours:(SALocalSearchOperationHours *)arg1 ;
-(NSArray *)photoList;
-(void)setPhotoList:(NSArray *)arg1 ;
@end


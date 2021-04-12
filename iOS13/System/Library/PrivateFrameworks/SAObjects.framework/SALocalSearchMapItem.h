/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SADistance, NSNumber, NSDate, SALocation, NSData;

@interface SALocalSearchMapItem : SADomainObject

@property (nonatomic,copy) NSArray * attributions; 
@property (nonatomic,retain) id<SAAceSerializable> detail; 
@property (nonatomic,copy) NSString * detailType; 
@property (nonatomic,copy) NSString * directionRole; 
@property (nonatomic,retain) SADistance * distance; 
@property (nonatomic,copy) NSNumber * distanceInMiles; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * localSearchProviderId; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSData * placeData; 
@property (nonatomic,copy) NSData * placeData2; 
@property (nonatomic,copy) NSNumber * placeId; 
@property (nonatomic,copy) NSData * resultDetourInfoData; 
@property (nonatomic,copy) NSString * spokenAddress; 
@property (nonatomic,copy) NSString * spokenName; 
@property (nonatomic,copy) NSString * suggestionsEntryType; 
+(id)mapItem;
+(id)mapItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setDetail:(id<SAAceSerializable>)arg1 ;
-(void)setDistance:(SADistance *)arg1 ;
-(SADistance *)distance;
-(id<SAAceSerializable>)detail;
-(NSArray *)attributions;
-(void)setAttributions:(NSArray *)arg1 ;
-(NSString *)spokenName;
-(NSString *)spokenAddress;
-(void)setSpokenName:(NSString *)arg1 ;
-(void)setSpokenAddress:(NSString *)arg1 ;
-(NSNumber *)placeId;
-(NSData *)placeData;
-(void)setPlaceData:(NSData *)arg1 ;
-(void)setPlaceId:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSString *)detailType;
-(void)setDetailType:(NSString *)arg1 ;
-(NSString *)directionRole;
-(void)setDirectionRole:(NSString *)arg1 ;
-(NSNumber *)distanceInMiles;
-(void)setDistanceInMiles:(NSNumber *)arg1 ;
-(NSNumber *)localSearchProviderId;
-(void)setLocalSearchProviderId:(NSNumber *)arg1 ;
-(NSData *)placeData2;
-(void)setPlaceData2:(NSData *)arg1 ;
-(NSData *)resultDetourInfoData;
-(void)setResultDetourInfoData:(NSData *)arg1 ;
-(NSString *)suggestionsEntryType;
-(void)setSuggestionsEntryType:(NSString *)arg1 ;
@end


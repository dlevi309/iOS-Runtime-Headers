/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

@class NSString, NSDate, NSDictionary;


@protocol PGGraphIngestPerson <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@required
-(BOOL)isFavorite;
-(BOOL)isMe;
-(NSString *)contactID;
-(NSString *)fullName;
-(NSString *)UUID;
-(BOOL)isUserCreated;
-(NSDate *)birthdayDate;
-(unsigned long long)relationship;
-(NSDate *)anniversaryDate;
-(NSDate *)potentialBirthdayDate;
-(unsigned long long)ageCategory;
-(unsigned long long)sex;
-(NSDictionary *)locationsByAddressTypes;

@end


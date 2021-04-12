/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSArray, NSSet, NSDate, NSString;


@protocol PGSuggestion <NSObject>
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short notificationState; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets; 
@property (nonatomic,readonly) NSArray * representativeAssets; 
@property (nonatomic,readonly) NSSet * features; 
@property (nonatomic,readonly) id recipe; 
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned long long relevanceDurationInDays; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) unsigned char notificationQuality; 
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,copy,readonly) NSArray * reasons; 
@optional
-(NSArray *)reasons;
-(BOOL)isInvalid;

@required
-(unsigned short)type;
-(long long)version;
-(unsigned short)state;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(unsigned short)subtype;
-(NSSet *)features;
-(id)recipe;
-(unsigned short)notificationState;
-(NSArray *)representativeAssets;
-(NSArray *)keyAssets;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)containsUnverifiedPersons;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned long long)relevanceDurationInDays;
-(unsigned char)notificationQuality;

@end


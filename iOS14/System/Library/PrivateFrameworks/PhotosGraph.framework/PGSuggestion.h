/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double score; 
@property (nonatomic,copy,readonly) NSArray * reasons; 
@optional
-(BOOL)isInvalid;
-(double)score;
-(NSArray *)reasons;

@required
-(unsigned short)subtype;
-(NSDate *)universalEndDate;
-(id)recipe;
-(NSSet *)features;
-(NSDate *)universalStartDate;
-(NSString *)subtitle;
-(unsigned short)notificationState;
-(NSDate *)creationDate;
-(BOOL)containsUnverifiedPersons;
-(unsigned short)type;
-(NSArray *)representativeAssets;
-(unsigned short)state;
-(long long)version;
-(NSString *)title;
-(NSArray *)keyAssets;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned char)notificationQuality;
-(unsigned long long)relevanceDurationInDays;

@end


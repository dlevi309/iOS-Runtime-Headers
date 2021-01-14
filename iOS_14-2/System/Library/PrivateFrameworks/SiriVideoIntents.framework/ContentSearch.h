/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
*/

#import <Intents/INObject.h>

@class NSString, NSArray, INDateComponentsRange, NSNumber, SearchAttributes;

@interface ContentSearch : INObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * umcId; 
@property (assign,nonatomic) long long episodeReference; 
@property (nonatomic,copy) NSString * episodeNumber; 
@property (assign,nonatomic) long long seasonReference; 
@property (nonatomic,copy) NSString * seasonNumber; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSArray * roles; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,copy) INDateComponentsRange * releaseDateRange; 
@property (nonatomic,copy) NSString * studio; 
@property (assign,nonatomic) long long sort; 
@property (nonatomic,copy) NSNumber * recommendedAge; 
@property (nonatomic,copy) SearchAttributes * attributes; 
@property (nonatomic,copy) NSNumber * itemLimit; 
@end


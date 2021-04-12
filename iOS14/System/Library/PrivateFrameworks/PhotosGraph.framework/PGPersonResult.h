/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDate;


@protocol PGPersonResult <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@required
+(unsigned long long)type;
-(NSString *)localIdentifier;
-(NSString *)contactIdentifier;
-(NSString *)fullName;
-(NSDate *)birthdayDate;
-(BOOL)isVerified;
-(long long)compareToPerson:(id)arg1;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;
-(NSString *)keywordDescription;

@end


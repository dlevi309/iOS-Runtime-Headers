/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDate;


@protocol PGPersonResult <NSObject>
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@required
+(unsigned long long)type;
-(NSString *)displayName;
-(NSString *)contactIdentifier;
-(NSString *)localIdentifier;
-(BOOL)isVerified;
-(NSDate *)birthdayDate;
-(NSString *)keywordDescription;
-(long long)compareToPerson:(id)arg1;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;

@end


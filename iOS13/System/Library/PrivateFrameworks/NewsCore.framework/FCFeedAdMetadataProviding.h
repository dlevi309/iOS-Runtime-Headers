/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, NSArray;


@protocol FCFeedAdMetadataProviding <NSObject>
@property (nonatomic,readonly) NSString * iAdIdentifier; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) long long iAdContentProvider; 
@property (nonatomic,readonly) NSString * iAdPrimaryAudience; 
@property (nonatomic,readonly) NSString * iAdFeedID; 
@property (nonatomic,readonly) NSString * iAdSectionID; 
@required
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSString *)iAdIdentifier;
-(long long)iAdContentProvider;
-(NSString *)iAdPrimaryAudience;
-(NSString *)iAdFeedID;
-(NSString *)iAdSectionID;

@end


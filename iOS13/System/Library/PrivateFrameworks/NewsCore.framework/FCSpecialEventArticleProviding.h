/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, NSDate;


@protocol FCSpecialEventArticleProviding <FCSpecialEventItemProviding>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,copy,readonly) NSString * storyType; 
@required
-(NSDate *)displayDate;
-(NSString *)articleID;
-(NSString *)storyType;

@end


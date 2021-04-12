/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

@class NSDate, NSString;


@protocol FCHeadlineMetadata <NSObject>
@property (nonatomic,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) NSString * storyType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * shortExcerpt; 
@optional
-(NSString *)title;
-(NSString *)shortExcerpt;

@required
-(NSDate *)displayDate;
-(NSString *)storyType;

@end


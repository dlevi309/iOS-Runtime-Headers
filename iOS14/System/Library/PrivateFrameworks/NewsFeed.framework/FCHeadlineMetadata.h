/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

@class NSDate, NSString;


@protocol FCHeadlineMetadata <NSObject>
@property (nonatomic,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) NSString * storyType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * shortExcerpt; 
@optional
-(NSString *)shortExcerpt;
-(NSString *)title;

@required
-(NSDate *)displayDate;
-(NSString *)storyType;

@end


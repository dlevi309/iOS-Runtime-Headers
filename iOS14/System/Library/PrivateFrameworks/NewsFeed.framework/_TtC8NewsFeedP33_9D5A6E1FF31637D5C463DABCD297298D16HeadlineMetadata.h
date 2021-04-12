/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString;

@interface _TtC8NewsFeedP33_9D5A6E1FF31637D5C463DABCD297298D16HeadlineMetadata : NSObject <FCHeadlineMetadata> {

	 title;
	 storyType;
	 shortExcerpt;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * displayDate; 
@property (readonly,nonatomic) NSString * storyType; 
@property (readonly,nonatomic) NSString * shortExcerpt; 
-(NSDate *)displayDate;
-(NSString *)storyType;
-(id)init;
-(NSString *)shortExcerpt;
-(NSString *)title;
@end


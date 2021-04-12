/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString;

@interface NewsUI2.MagazineFeedArticle : NSObject <FCHeadlineMetadata> {

	 articleID;
	 title;
	??? displayDate;
	 storyType;
	 shortExcerpt;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * displayDate; 
@property (readonly,nonatomic) NSString * storyType; 
@property (readonly,nonatomic) NSString * shortExcerpt; 
-(id)init;
-(NSString *)title;
-(NSDate *)displayDate;
-(NSString *)shortExcerpt;
-(NSString *)storyType;
@end


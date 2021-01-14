/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString;

@interface NewsUI2.AudioFeedHeadlineMetadata : NSObject <FCHeadlineMetadata> {

	 storyType;
	 title;
	 shortExcerpt;

}

@property (readonly,nonatomic) NSDate * displayDate; 
@property (readonly,nonatomic) NSString * storyType; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * shortExcerpt; 
-(NSDate *)displayDate;
-(NSString *)storyType;
-(id)init;
-(NSString *)shortExcerpt;
-(NSString *)title;
@end


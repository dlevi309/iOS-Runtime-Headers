/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString, NSDictionary;

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata> {

	NSDictionary* _dictionary;
	NSDate* _displayDate;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                   //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) NSString * articleID; 
@property (nonatomic,readonly) BOOL isTreatedAsNew; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storyType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * shortExcerpt; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(NSDate *)displayDate;
-(NSString *)articleID;
-(NSString *)shortExcerpt;
-(NSString *)storyType;
-(BOOL)isTreatedAsNew;
@end


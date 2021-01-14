/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * storyType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * shortExcerpt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)displayDate;
-(NSString *)storyType;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)shortExcerpt;
-(NSString *)articleID;
-(BOOL)isTreatedAsNew;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end


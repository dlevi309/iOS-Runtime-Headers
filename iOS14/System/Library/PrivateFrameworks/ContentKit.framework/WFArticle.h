/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, NSDate, NSURL;

@interface WFArticle : NSObject <WFNaming, WFSerializableContent> {

	NSString* _title;
	NSString* _author;
	NSDate* _publishedDate;
	NSString* _body;
	NSString* _excerpt;
	unsigned long long _numberOfWords;
	NSURL* _URL;
	NSURL* _mainImageURL;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishedDate;                   //@synthesize publishedDate=_publishedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * excerpt;                       //@synthesize excerpt=_excerpt - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfWords;              //@synthesize numberOfWords=_numberOfWords - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mainImageURL;                     //@synthesize mainImageURL=_mainImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(void)fetchArticleFromURL:(id)arg1 pageHTML:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(unsigned long long)numberOfWordsInString:(id)arg1 ;
+(id)summaryOfParagraph:(id)arg1 ;
+(id)mainImageURLFromHTML:(id)arg1 ;
+(id)articleWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8 ;
-(NSString *)excerpt;
-(NSString *)author;
-(NSString *)body;
-(NSString *)wfName;
-(NSDate *)publishedDate;
-(NSURL *)mainImageURL;
-(NSURL *)URL;
-(unsigned long long)hash;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)numberOfWords;
-(id)wfSerializedRepresentation;
-(id)initWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8 ;
@end


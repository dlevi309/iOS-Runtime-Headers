/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCIssueBookmark : NSObject <NSCopying> {

	long long _issueType;
	NSString* _pageID;
	NSString* _articleID;

}

@property (nonatomic,readonly) long long issueType;                    //@synthesize issueType=_issueType - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                 //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
+(id)ANFBookmarkWithArticleID:(id)arg1 ;
+(id)PDFBookmarkWithPageID:(id)arg1 ;
-(id)init;
-(NSString *)pageID;
-(NSString *)articleID;
-(id)initWithIssueType:(long long)arg1 articleID:(id)arg2 pageID:(id)arg3 ;
-(long long)issueType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


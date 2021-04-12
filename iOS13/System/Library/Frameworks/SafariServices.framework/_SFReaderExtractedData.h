/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface _SFReaderExtractedData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _author;
	NSString* _publishedDate;
	NSData* _body;
	NSURL* _mainImageURL;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                     //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) NSString * publishedDate;              //@synthesize publishedDate=_publishedDate - In the implementation block
@property (nonatomic,readonly) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSURL * mainImageURL;                       //@synthesize mainImageURL=_mainImageURL - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)author;
-(NSData *)body;
-(id)_initWithAuthor:(id)arg1 body:(id)arg2 publishedDate:(id)arg3 title:(id)arg4 mainImageURL:(id)arg5 url:(id)arg6 ;
-(id)initWithReaderContent:(id)arg1 url:(id)arg2 ;
-(NSString *)publishedDate;
-(NSURL *)mainImageURL;
@end


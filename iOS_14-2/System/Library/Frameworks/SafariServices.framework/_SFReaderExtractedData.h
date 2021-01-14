/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)author;
-(NSData *)body;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithReaderContent:(id)arg1 url:(id)arg2 ;
-(id)description;
-(id)_initWithAuthor:(id)arg1 body:(id)arg2 publishedDate:(id)arg3 title:(id)arg4 mainImageURL:(id)arg5 url:(id)arg6 ;
-(NSString *)publishedDate;
-(NSURL *)mainImageURL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end


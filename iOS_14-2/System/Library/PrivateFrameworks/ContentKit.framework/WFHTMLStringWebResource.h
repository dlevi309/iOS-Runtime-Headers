/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFWebResource.h>

@class NSString, NSURL;

@interface WFHTMLStringWebResource : WFWebResource {

	NSString* _htmlString;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSString * htmlString;              //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                    //@synthesize baseURL=_baseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)MIMEType;
-(NSURL *)baseURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)htmlString;
-(id)data;
-(id)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)textEncodingName;
-(id)loadInWKWebView:(id)arg1 ;
-(id)initWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
@end


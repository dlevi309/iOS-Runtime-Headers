/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)textEncodingName;
-(NSString *)htmlString;
-(id)loadInWKWebView:(id)arg1 ;
-(id)initWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
@end


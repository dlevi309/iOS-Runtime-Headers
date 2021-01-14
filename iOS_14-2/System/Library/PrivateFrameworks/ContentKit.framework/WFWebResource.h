/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSString;

@interface WFWebResource : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSString* _frameName;

}

@property (nonatomic,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,readonly) NSString * frameName;                     //@synthesize frameName=_frameName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
+(id)webResourceWithURL:(id)arg1 ;
+(id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
+(id)webResourceWithFile:(id)arg1 ;
-(id)serializedRepresentation;
-(NSString *)MIMEType;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)frameName;
-(NSString *)textEncodingName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)loadInWKWebView:(id)arg1 ;
@end


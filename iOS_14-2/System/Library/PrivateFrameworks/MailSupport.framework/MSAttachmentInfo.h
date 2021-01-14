/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface MSAttachmentInfo : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSString* _filename;

}

@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)filename;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 filename:(id)arg2 ;
-(void)setFilename:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


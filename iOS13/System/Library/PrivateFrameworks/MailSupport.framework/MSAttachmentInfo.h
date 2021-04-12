/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 filename:(id)arg2 ;
@end


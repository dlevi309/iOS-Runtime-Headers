/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ECMIMECharset;
@class NSString;

@interface ECHTMLStringAndMIMECharset : NSObject <NSSecureCoding> {

	NSString* _string;
	id<ECMIMECharset> _charset;

}

@property (nonatomic,copy,readonly) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) id<ECMIMECharset> charset;              //@synthesize charset=_charset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mf_utf8HTMLStringWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ECMIMECharset>)charset;
-(NSString *)string;
-(id)initWithString:(id)arg1 charset:(id)arg2 ;
@end


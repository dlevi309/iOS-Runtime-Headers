/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(id<ECMIMECharset>)charset;
-(id)initWithString:(id)arg1 charset:(id)arg2 ;
@end


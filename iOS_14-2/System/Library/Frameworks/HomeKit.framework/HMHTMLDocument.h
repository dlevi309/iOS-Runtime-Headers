/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDocument, NSString, NSAttributedString;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding> {

	_HMDocument* _document;

}

@property (readonly) _HMDocument * document;                                  //@synthesize document=_document - In the implementation block
@property (copy,readonly) NSString * stringValue; 
@property (copy,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSAttributedString *)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(BOOL)validateAndReturnError:(id*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(_HMDocument *)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


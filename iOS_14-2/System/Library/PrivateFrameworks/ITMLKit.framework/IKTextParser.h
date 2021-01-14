/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,retain,readonly) NSString * string; 
@property (nonatomic,retain,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)textWithDOMElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
+(id)textWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(unsigned long long)hash;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4 ;
-(id)attributedStringWithFont:(id)arg1 style:(id)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 defaultAttributes:(id*)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id*)arg5 ;
-(id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
-(id)_attributesWithFont:(id)arg1 style:(id)arg2 ;
-(id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(/*^block*/id)arg2 style:(id)arg3 ;
-(id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 ;
-(id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _LTTranslationParagraph : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _text;
	NSArray* _spans;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * spans;                    //@synthesize spans=_spans - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)spans;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 spans:(id)arg3 ;
@end


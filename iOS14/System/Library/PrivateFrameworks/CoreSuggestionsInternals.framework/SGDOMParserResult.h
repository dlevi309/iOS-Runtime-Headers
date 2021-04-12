/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SGDOMParserResult : NSObject <NSSecureCoding> {

	NSString* _plainText;
	NSArray* _taggedCharacterRanges;

}

@property (nonatomic,readonly) NSString * plainText;                         //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,readonly) NSArray * taggedCharacterRanges;              //@synthesize taggedCharacterRanges=_taggedCharacterRanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)taggedCharacterRanges;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)plainText;
-(id)initWithPlainText:(id)arg1 taggedCharacterRanges:(id)arg2 ;
-(void)insertSubject:(id)arg1 ;
-(BOOL)isEqualToDOMParserResult:(id)arg1 ;
@end


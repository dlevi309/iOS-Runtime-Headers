/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider {

	NSAttributedString* _text;

}

@property (nonatomic,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
+(id)textContentProviderWithAttributedText:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSAttributedString *)text;
-(id)initWithAttributedText:(id)arg1 ;
-(id)contentEncodedString;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider {

	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(id)textContentProviderWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)contentEncodedString;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end


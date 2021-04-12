/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding> {

	NSString* _orthography;
	NSString* _language;

}

@property (nonatomic,retain) NSString * orthography;              //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                 //@synthesize language=_language - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)orthography;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
@end


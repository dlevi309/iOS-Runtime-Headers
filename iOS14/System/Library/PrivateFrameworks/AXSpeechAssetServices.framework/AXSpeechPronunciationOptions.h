/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
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
-(void)setLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)orthography;
-(id)description;
-(void)setOrthography:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
@end


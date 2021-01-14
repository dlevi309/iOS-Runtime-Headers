/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSDictionary;

@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding> {

	BOOL _isConfident;
	BOOL _isFinal;
	NSLocale* _dominantLanguage;
	NSDictionary* _confidences;

}

@property (nonatomic,copy) NSLocale * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
@property (nonatomic,copy) NSDictionary * confidences;               //@synthesize confidences=_confidences - In the implementation block
@property (nonatomic,readonly) BOOL isConfident;                     //@synthesize isConfident=_isConfident - In the implementation block
@property (assign,nonatomic) BOOL isFinal;                           //@synthesize isFinal=_isFinal - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSLocale *)dominantLanguage;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFinal;
-(void)setDominantLanguage:(NSLocale *)arg1 ;
-(NSDictionary *)confidences;
-(id)initWithConfidences:(id)arg1 isConfident:(BOOL)arg2 dominantLanguage:(id)arg3 isFinal:(BOOL)arg4 ;
-(void)setConfidences:(NSDictionary *)arg1 ;
-(BOOL)isConfident;
-(void)setIsFinal:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


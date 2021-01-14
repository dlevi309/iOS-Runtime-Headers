/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTTranslationToken : NSObject <NSSecureCoding> {

	NSString* _text;
	double _confidence;

}

@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithOspreyToken:(id)arg1 ;
-(id)initWithText:(id)arg1 confidence:(double)arg2 ;
-(void)setConfidence:(double)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
@end

